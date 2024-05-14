#include <unistd.h>

int le_plus_grand(int *tab, int size)
{
    int index;
    int i;

    index = 0;
    i = 1;
    while (i <= size - 1)
    {
        if (tab[index] > tab[i])
            i++;
        else
        {
            index = i;
            i++;
        }
    }
    return (index);
}

void    ft_sort_int_tab(int *tab, int size)
{
    int sort[size];
    int index;
    int tempon;
    int i;
    int nb;

    i = 0;
    nb = size;
    while (i <= size - 1)
    {
        index = le_plus_grand(&tab[i], nb);
        tempon = tab[i];
        tab[i] = tab[index + i];
        tab[index + i] = tempon;
        i++;
        nb--;
    }
    return ;
}