/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:19:00 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 15:35:19 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_side_zero(int **result, int line, int condition, int length)
{
	int	i;
	int	box;
	int	highest_value;

	i = 0;
	box = 0;
	highest_value = 0;
	while (i < length)
	{
		if (result[i][line] > highest_value)
		{
			box++;
			highest_value = result[i][line];
		}
		i++;
	}
	if (condition == box)
		return (1);
	return (0);
}

int	ft_side_one(int **result, int line, int condition, int length)
{
	int	i;
	int	box;
	int	highest_value;

	i = length - 1;
	box = 0;
	highest_value = 0;
	while (i >= 0)
	{
		if (result[i][line] > highest_value)
		{
			box++;
			highest_value = result[i][line];
		}
		i--;
	}
	if (condition == box)
		return (1);
	return (0);
}

int	ft_side_two(int **result, int line, int condition, int length)
{
	int	i;
	int	box;
	int	highest_value;

	i = 0;
	box = 0;
	highest_value = 0;
	while (i < length)
	{
		if (result[line][i] > highest_value)
		{
			box++;
			highest_value = result[line][i];
		}
		i++;
	}
	if (condition == box)
		return (1);
	return (0);
}

int	ft_side_three(int result[][], int line, int condition, int length)
{
	int	i;
	int	box;
	int	highest_value;

	i = length - 1;
	box = 0;
	highest_value = 0;
	while (i >= 0)
	{
		if (result[line][i] > highest_value)
		{
			box++;
			highest_value = result[line][i];
		}
		i--;
	}
	if (condition == box)
		return (1);
	return (0);
}

int	ft_check_condition(int result[][], int conditions[], int number_conditions)
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
		else if (side == 3)
			good = ft_side_three(result, line, conditions[i], length);
		i++;
	}
