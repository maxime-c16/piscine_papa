#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_iterative_factorial(int nb)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if (nb == 0)
        return (1);
    while (i <= nb)
    {
        result = result * i;
        i++;
    }
    return (result);
}