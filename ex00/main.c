/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:04:41 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 14:44:36 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		*ft_add_entry(int *table, char *str);
int		**ft_create_table(int **table);
int		ft_verif_entry(char **argv);
void	ft_show_result(int **tab_out);
void	ft_free_memory(int *tab_in, int **tab_out);
int ft_generate_solution(int *conditions, int   **tab_out);

int	main(int argc, char **argv)
{
	int	**tab_out;
	int	*tab_in;

	if (argc != 2 || ft_verif_entry(argv) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	tab_in = ft_add_entry(tab_in, argv[1]);
	if (!ft_generate_solution(tab_in, tab_out))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_show_result(tab_out);
	ft_free_memory(tab_in, tab_out);
	return (0);
}

void	ft_free_memory(int *tab_in, int **tab_out)
{
	int	i;

	i = 0;
	free(tab_in);
	while (i < 4)
	{
		free(tab_out[i]);
		i++;
	}
	free(tab_out);
}
