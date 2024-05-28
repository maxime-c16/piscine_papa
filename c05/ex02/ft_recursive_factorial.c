#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 0)
        return (1);
    nb = nb * ft_recursive_factorial(nb - 1);
    return (nb);
}