/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:22:26 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/17 00:07:19 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void	ft_permute(int tab[], int start, int end)
{
	if (start == end)
	{
		printarray(tab, end + 1);
		return;
	}
	int	i;

	i = start;
	while (i <= end)
	{
		ft_swap(tab + i, tab + start);
		ft_permute(tab, start + 1, end);
		ft_swap(tab + i, tab + start);
		i++;
	}
}

int	**ft_generate_solution(int *conditions, int	**tab_out)
{

}

int main(void)
{
	int tab[] = {1,2,3,4};
	ft_permute(tab, 0, 3);
}
