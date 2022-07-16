/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:04:41 by avapaill          #+#    #+#             */
/*   Updated: 2022/07/16 15:04:53 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int    *ft_add_entry(int *table, char *str);
int    **ft_create_table(int **table);
int    ft_verif_entry(char **argv);
void    ft_show_result(int **tab_out);
void    ft_free_memory(int *tab_in, int **tab_out);

int    main(int argc, char **argv)
{
    int    **tab_out;
    int    *tab_in;
    int    i;

    if (argc != 2 || ft_verif_entry(argv) != 0)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    tab_out = ft_create_table(tab_out);
    tab_in = ft_add_entry(tab_in, argv[1]);
    tab_out = ft_generate_solution(tab_in, tab_out);
    ft_show_result(tab_out);
    ft_free_memory(tab_in, tab_out);
    return (0);
}

void    ft_free_memory(int *tab_in, int **tab_out)
{
    int    i;

    i = 0;
    free(tab_in);
    while (i < 4)
    {
        free(tab_out[i]);
        i++;
    }
    free(tab_out);
}
