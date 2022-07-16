/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:33:32 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 19:10:49 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_add_entry(int *table, char *str);
int	**ft_create_table(int **table);
int	ft_verif_entry(char **argv);

int	*ft_add_entry(int *table, char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	table = malloc(16 * sizeof(int));
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			table[nb] = str[i] - '0';
			nb++;
		}
		i++;
	}
	return (table);
}

int	**ft_create_table(int **table)
{
	int	i;

	i = 0;
	table = malloc(4 * sizeof(int));
	while (!table)
		table = malloc(4 * sizeof(int));
	while (i < 4)
	{
		table[i] = malloc(4 * sizeof(int));
		while (!table[i])
			table[i] = malloc(4 * sizeof(int));
		i++;
	}
	return (table);
}

int	ft_verif_entry(char **argv)
{
	int	i;
	int	nb_correct;

	i = 0;
	nb_correct = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
			nb_correct++;
		i++;
	}
	if (nb_correct == 16)
		return (0);
	return (1);
}

int	ft_check_condition(int **result, int conditions[], int number_conditions)
{
	int	i;
	int	good;
	int	side;
	int	line;
	int	length;

	i = 0;
	good = 1;
	length = number_conditions / 4;
	while (i < number_conditions && good)
	{
		side = i / 4;
		line = i % 4;
		if (side == 0)
			good = ft_side_zero(result, line, conditions[i], length);
		else if (side == 1)
			good = ft_side_one(result, line, conditions[i], length);
		else if (side == 2)
			good = ft_side_two(result, line, conditions[i], length);
		else
			good = ft_side_three(result, line, conditions[i], length);
		i++;
	}
	return (good);
}
