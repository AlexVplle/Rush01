/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:05:07 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 16:24:50 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_possibilities(void);
int	**ft_possible_one(int **permutations);
int	**ft_possible_second(int **permutations);
int	**ft_possible_third(int **permutations);
int	**ft_possible_forth(int **permutations);

int	**ft_possibilities(void)
{
	int	i;
	int	**permutations;

	permutations = malloc(24 * sizeof(*permutations));
	i = 0;
	while (i < 24)
	{
		permutations[i] = malloc(4 * sizeof(int));
		i++;
	}
	permutations = ft_possible_one(permutations);
	permutations = ft_possible_second(permutations);
	permutations = ft_possible_third(permutations);
	permutations = ft_possible_forth(permutations);
	return (permutations);
}

int	**ft_possible_one(int **permutations)
{
	permutations[0][0] = 1;
	permutations[0][1] = 2;
	permutations[0][2] = 3;
	permutations[0][3] = 4;
	permutations[1][0] = 1;
	permutations[1][1] = 2;
	permutations[1][2] = 4;
	permutations[1][3] = 3;
	permutations[2][0] = 1;
	permutations[2][1] = 3;
	permutations[2][2] = 2;
	permutations[2][3] = 4;
	permutations[3][0] = 1;
	permutations[3][1] = 3;
	permutations[3][2] = 4;
	permutations[3][3] = 2;
	permutations[4][0] = 1;
	permutations[4][1] = 4;
	permutations[4][2] = 3;
	permutations[4][3] = 2;
	permutations[5][0] = 1;
	permutations[5][1] = 4;
	permutations[5][2] = 2;
	permutations[5][3] = 3;
	return (permutations);
}

int	**ft_possible_second(int **permutations)
{
	permutations[6][0] = 2;
	permutations[6][1] = 1;
	permutations[6][2] = 3;
	permutations[6][3] = 4;
	permutations[7][0] = 2;
	permutations[7][1] = 1;
	permutations[7][2] = 4;
	permutations[7][3] = 3;
	permutations[8][0] = 2;
	permutations[8][1] = 3;
	permutations[8][2] = 1;
	permutations[8][3] = 4;
	permutations[9][0] = 2;
	permutations[9][1] = 3;
	permutations[9][2] = 4;
	permutations[9][3] = 1;
	permutations[10][0] = 2;
	permutations[10][1] = 4;
	permutations[10][2] = 1;
	permutations[10][3] = 3;
	permutations[11][0] = 2;
	permutations[11][1] = 4;
	permutations[11][2] = 3;
	permutations[11][3] = 1;
	return (permutations);
}

int	**ft_possible_third(int **permutations)
{
	permutations[12][0] = 3;
	permutations[12][1] = 1;
	permutations[12][2] = 2;
	permutations[12][3] = 4;
	permutations[13][0] = 3;
	permutations[13][1] = 1;
	permutations[13][2] = 4;
	permutations[13][3] = 2;
	permutations[14][0] = 3;
	permutations[14][1] = 2;
	permutations[14][2] = 1;
	permutations[14][3] = 4;
	permutations[15][0] = 3;
	permutations[15][1] = 2;
	permutations[15][2] = 4;
	permutations[15][3] = 1;
	permutations[16][0] = 3;
	permutations[16][1] = 4;
	permutations[16][2] = 1;
	permutations[16][3] = 2;
	permutations[17][0] = 3;
	permutations[17][1] = 4;
	permutations[17][2] = 2;
	permutations[17][3] = 1;
	return (permutations);
}

int	**ft_possible_forth(int **permutations)
{
	permutations[18][0] = 4;
	permutations[18][1] = 3;
	permutations[18][2] = 2;
	permutations[18][3] = 1;
	permutations[19][0] = 4;
	permutations[19][1] = 3;
	permutations[19][2] = 1;
	permutations[19][3] = 2;
	permutations[20][0] = 4;
	permutations[20][1] = 2;
	permutations[20][2] = 3;
	permutations[20][3] = 1;
	permutations[21][0] = 4;
	permutations[21][1] = 2;
	permutations[21][2] = 1;
	permutations[21][3] = 3;
	permutations[22][0] = 4;
	permutations[22][1] = 1;
	permutations[22][2] = 2;
	permutations[22][3] = 3;
	permutations[23][0] = 4;
	permutations[23][1] = 1;
	permutations[23][2] = 3;
	permutations[23][3] = 2;
	return (permutations);
}
