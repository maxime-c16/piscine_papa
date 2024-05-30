/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcauchy <coherence.ing@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:20:34 by lcauchy           #+#    #+#             */
/*   Updated: 2024/05/30 04:22:55 by lcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *base)
{
	int	len;

	len = 0;
	while (base[len])
		len++;
	return (len);
}


char **ft_split(char *str, char *charset)
{
    char    **tab;
    int     i;
    int     j;
    int     k;
    int     l = 0;
    int     len_charset;
    int     index_tab;
    int     index_tab_debut;
    int     index_tab_fin;
    int     len_mot;

    tab = (char **)malloc(sizeof(char) * ft_strlen(str));
    i = 0;
    j = 1;
    k = 0;
    len_charset = ft_strlen(charset);
    index_tab = 0;
    index_tab_debut = 0;
    index_tab_fin = 0;
// recherche charset - index_tab pour malloc chaine index_tab.................................
    if (len_charset == 0)
        return (0);
    while (str[i])
    {
        // Boucle charset .................................
        if (str[i] == charset[0])
        {
            while (j < len_charset)
            {
                if (str[i+j] == charset[j])
                    j++;
                else
                    j = len_charset + 1;
            }
            // charset found .................................
            if (j == len_charset)
            {
                // affectation malloc du tab[index].........
                index_tab_fin = i;
                len_mot = index_tab_fin - index_tab_debut;
                tab[index_tab] = malloc(sizeof(char) * len_mot + 1);
                k = 0;
                while(k < len_mot)
                {
                    tab[index_tab][k] = str[index_tab_debut + k];
                    k++;
                }
                tab[index_tab][len_mot] = 0;
                index_tab++;
                i = i + len_charset - 1;
                index_tab_debut = i + 1;
            }
            // charset not found .................................
            j = 1;
        }
        i++;
    }
    // affectation malloc du tab[dernier index].............
    index_tab_fin = i;
    len_mot = index_tab_fin - index_tab_debut;
    tab[index_tab] = malloc(sizeof(char) * len_mot + 1);
    k = 0;
    while(k < len_mot)
    {
        tab[index_tab][k] = str[index_tab_debut + k];
        k++;
    }
    tab[index_tab][len_mot] = 0;

    return tab;
}