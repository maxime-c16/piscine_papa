/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcauchy <coherence.ing@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:50:11 by lcauchy           #+#    #+#             */
/*   Updated: 2024/05/13 23:42:13 by lcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int *rev;
    int i;
    int j;

    i = 0;
    j = size - 1;
    while(i <= size - 1)
    {
        rev[i] = tab[j];
        i++;
        j--;
    }
    i = 0;
    while(i <= size -1)
    {
        tab[i] = rev[i];
        i++;
    }
    return ;
}