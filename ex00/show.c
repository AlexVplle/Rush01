/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:17:33 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 15:17:38 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_show_result(int **tab_out)
{
    int    i;
    int    j;
    char    character;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            character = tab_out[i][j] + '0';
            write(1, &character, 1);
            if (j != 3)
                write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
}
