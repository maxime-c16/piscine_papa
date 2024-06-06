/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcauchy <coherence.ing@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:20:34 by lcauchy           #+#    #+#             */
/*   Updated: 2024/06/06 18:35:27 by lcauchy          ###   ########.fr       */
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

int found_charset(char *str, char *charset, int i_str)
{
    int i_set;
    int len;
    int i;

    i_set = 0;
    len = ft_strlen(charset);
    i = 0;
    while (i < len)
    {
        if (str[i_str + i] == charset[i_set])
        {
            i++;
            i_set++;
        }
        else
            break;
    }
    if (i == len)
        return (1);
    else
        return (0);    
}

int	nombre_de_mots(char *str, char *charset)
{
    int nombre;
    int i_str;
    
    nombre = 1;
    i_str = 0;
    while (str[i_str])
    {
        if (str[i_str] == charset[0])
        {
            if (found_charset(str, charset, i_str))
                nombre++;
        }
        i_str++;
    }
    return (nombre);
}


char *recherche_mot(char *str, char *charset, int position)
{
    char    *mot;
    int     i_str;
    int     i_mot;
    int     i;
    
    i = 0;
    i_str = 0;
    i_mot = 0;
    mot = malloc(sizeof(char) * ft_strlen(str));
    while (i < nombre_de_mots(str, charset))
    {
        while (found_charset(str, charset, i_str) == 0 && str[i_str])
        {
            mot[i_mot] = str[i_str];
            i_str++;
            i_mot++;
        }
        if (i == position)
            return (mot);
        i++;
        i_str += ft_strlen(charset);
        i_mot = 0;
    }
}        

 
char **ft_split(char *str, char *charset)
{
    char    **tab;
    int     nb_mots;
    int     i;
    char    *mot;
    
    nb_mots = nombre_de_mots(str, charset);
    tab = (char **)malloc(sizeof(char*) * nb_mots);
    i = 0;    
    if (nb_mots == 1)
        {
        tab[0] = malloc(sizeof(char) * ft_strlen(str));
        tab[0] = str;
        return (tab);
        }
    while (i < nb_mots)
    {
        mot = recherche_mot(str, charset, i);
        tab[i] = malloc(sizeof(char) * ft_strlen(mot + 1));
        tab[i] = mot;
        i++;
    }
    return (tab);
}