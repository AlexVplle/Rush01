/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:33:32 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 17:36:33 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_side_zero(int **result, int line, int condition, int length);
int	ft_side_one(int **result, int line, int condition, int length);
int	ft_side_two(int **result, int line, int condition, int length);
int	ft_side_three(int **result, int line, int condition, int length);
int	*ft_add_entry(char *str);
int	**ft_create_table(void);
int	ft_verif_entry(char **argv);

int	*ft_add_entry(char *str)
{
	int	i;
	int	nb;
	int	*table;

	i = 0;
	nb = 0;
	table = malloc(17 * sizeof(int));
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

int	**ft_create_table(void)
{
	int	i;
	int	**table;

	i = 0;
	table = malloc(5 * sizeof(int));
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

int	ft_check_duplicate(int **result, int length)
{
	int	i;
	int	j;
	int	line;

	line = 0;
	while (line < 4)
	{
		i = 0;
		while (i < length)
		{
			j = 0;
			while (j < line)
			{
				if (result[line][i] == result[j][i])
					return (1);
				j++;
			}
			i++;
		}
		line++;
	}
	return (0);
}
