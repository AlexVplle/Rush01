/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:22:26 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 17:46:44 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_check_duplicate(int **result, int length);
int	ft_check_condition(int **result, int conditions[], int number_conditions);
int	**ft_possibilities(void);
int	ft_generate_solution2(int **tab_perm, int *conditions, int **tab_out);

int	ft_generate_solution(int *conditions, int	**tab_out)
{
	int	cond1;
	int	cond2;
	int	**tab_perm;

	cond1 = 0;
	tab_perm = ft_possibilities();
	while (cond1 < 24)
	{
		cond2 = 0;
		tab_out[1] = tab_perm[cond1];
		while (cond2 < 24)
		{
			tab_out[2] = tab_perm[cond2];
			if (ft_generate_solution2(tab_perm, conditions, tab_out))
				return (1);
			cond2++;
		}
		cond1++;
	}
	return (0);
}

int	ft_generate_solution2(int **tab_perm, int *conditions, int **tab_out)
{
	int	cond3;
	int	cond4;

	cond3 = 0;
	while (cond3 < 24)
	{
		cond4 = 0;
		tab_out[3] = tab_perm[cond3];
		while (cond4 < 24)
		{
			tab_out[4] = tab_perm[cond4];
			if (ft_check_condition(tab_out, conditions, 16)
				&& !ft_check_duplicate(tab_out, 4))
				return (1);
			cond4++;
		}
		cond3++;
	}
	return (0);
}
