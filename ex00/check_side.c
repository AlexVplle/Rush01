/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_side.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:08:44 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 19:08:54 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_side_three(int **result, int line, int condition, int length)
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
