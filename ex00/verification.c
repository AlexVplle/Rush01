/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:16:19 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 15:17:20 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    *ft_add_entry(int *table, char *str);
int    **ft_create_table(int **table);
int    ft_verif_entry(char **argv);

int    *ft_add_entry(int *table, char *str)
{
    int    i;
    int    nb;

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

int    **ft_create_table(int **table)
{
    int    i;

    i = 0;
    table = malloc(4 * sizeof(int*));
    if (!table)
        return (NULL);
    while (i < 4)
    {
        table[i] = malloc(4 * sizeof(int));
        if (!table[i])
            return (NULL);
        i++;
    }
    return (table);
}

int    ft_verif_entry(char **argv)
{
    int    i;
    int    nb_correct;

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
