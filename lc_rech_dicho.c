#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lc_rech_dicho (char a, char *tab)
{
    int     low = 0;
    int     high = strlen(tab);
    int     mid = 0;

    write(1, "caractere recherché: ", 22);
    write(1, &a, 1);
    write(1, "\n", 1);
    printf("dimension tableau: %d\n", high);
    while(low <= high)
    {
        mid = low + (high - low) / 2;
        if (tab[mid] == a)
            return (mid);
        else if (tab[mid] < a)
            low = mid + 1;
        else if (tab[mid] > a)
            high = mid - 1;
    }
    return (mid);
}

int main(int ac, char **av)
{
    int     i = 0;
    int     index = 0;
    int     high = 999999;
    char    *tab;

//............init tableau de 1 Moct (1000000 d'octets)..............
//.comprenant 1000000 caractères classés par ordre alphabétique .....
    tab = malloc(sizeof(char) * high + 1);
    while (i <= high)
    {
        tab[i] = 'h';
        if (i >= high - 100)
            tab[i] = 'i';
        if (i >= high - 2)
            tab[i] = 'j';
        if (i == high)
            tab[i] = 'z';
        write(1,&tab[i], 1);
        i++;
    }
    tab[0] = 'a';
    tab[1] = 'b';
    write(1, "\n", 1);
    write(1, "recherche dichotomique de 'b' parmi 1000000 éléments:", 56);
    write(1, "\n", 1);
    index = lc_rech_dicho ('b', tab);
    printf("valeur de l'index de b :%d\n", index);
    return (0);
}
