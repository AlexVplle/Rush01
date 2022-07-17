/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:22:26 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 14:55:04 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_check_duplicate(int **result, int length);
int ft_check_condition(int **result, int conditions[], int number_conditions);
int **ft_possibilities(void);

int	ft_generate_solution(int *conditions, int	**tab_out)
{
	int cond1;
	int cond2;
	int cond3;
	int cond4;
	int **tab_perm;

	cond1 = 0;
	cond2 = 0;
	cond3 = 0;
	cond4 = 0;
	tab_perm = ft_possibilities();
	while (cond1 < 24)
	{
		tab_out[1] = tab_perm[cond1];
		while (cond2 < 24)
		{
			tab_out[2] = tab_perm[cond2];
			while (cond3 < 24)
			{
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
			cond2++;
		}
		cond1++;
	}
	return (0);
}
