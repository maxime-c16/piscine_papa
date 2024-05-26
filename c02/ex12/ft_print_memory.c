#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_ascii_to_hexa(char ascii)
{
    int nb;
    int a;
    int b;

    nb = 0;
    while (nb <= 255)
    {
        if (ascii == nb)
            {
                a = nb / 16;
                b = nb % 16;
                if (a < 10)
                    a += 48;
                else
                    a += 87;
                if (b < 10)
                    b += 48;
                else
                    b += 87;
                write(1, &a, 1);
                write(1, &b, 1);
                return ;
            }
        nb++;
    }
    return ;
}

int	ft_put_adress_reste(unsigned long a)
{
	int	reste_div_par_seize;

        reste_div_par_seize = (a % 16);
        if (reste_div_par_seize < 10)
            reste_div_par_seize += 48;
        else
            reste_div_par_seize += 87;
	return (reste_div_par_seize);
}

void	ft_put_adress(unsigned long nb)
{
	int	tab[10];
	int	i;

	i = 0;
	while (nb >= 10)
	{
		tab[i] = ft_put_adress_reste(nb);
		nb = nb / 16;
		i++;
	}
	i--;
	nb = nb + 48;
	write(1,"0000000", 7);
    write(1, &nb, 1);
	while (i >= 0)
	{
		write(1, &tab[i], 1);
		i--;
	}
	write(1, " ", 1);
	return ;
}

void    *ft_print_memory(char *adrr, unsigned int size)
{
    int     a;
    int     aa;
    int     aaa;
    unsigned long    adress;
    int     overflow;
    int     nb_esp_final;

    a = 0;
    aa = 0;
    aaa = 0;



//    adress = 0x10a161f40;
adress = (unsigned long)adrr;
    if (size == 0)
        return (0);
    while (a < size)
    {
        // IMPRESSION PREMIERE COLONNE DES ADRESSES A REVOIR ???
        if (!(a % 16))
            ft_put_adress(adress + a);
        //.IMPRESSION DEUXIEME COLONNE DES 16 VALEURS NUMERIQUES
        while (aa < 16)
        {
            if (a + aa < size)
                {
                    ft_ascii_to_hexa(adrr[a + aa]);
                    ft_ascii_to_hexa(adrr[a + aa + 1]);
                    write(1, " ", 1);
                }
            else
            //.IMPRESSION ESPACES SI SIZE MEMOIRE INFERIEUR A SIZE TABLEAU              
                {
                    overflow = (a + 16 - size) * 2;
                    nb_esp_final = overflow + overflow / 4;
                    while (nb_esp_final > 0)
                    {
                        write(1, " ", 1);
                        nb_esp_final--;
                    }
                    aa = 14;
                }
            aa +=2;
        }
        aa = 0;
        // IMPRESSION TROISIEME COLONNE DES 16 VALEURS IMPRIMABLES        
        while (aaa < 16)
        {
            if (adrr[a + aaa] < 32 || adrr[a + aaa] > 126)
                write(1,".", 1);
            else
                write(1, &adrr[a + aaa], 1);
            aaa++;
            if (a + aaa == size)
                {
                    overflow = (a + 16 - size);
                    write(1, "                                ", overflow);
                    aaa = 16;
                }
        }
        write(1, "\n", 1);
        aaa = 0;
        a += 16;
    }
}




int	main(int ac, char *av[])
{
    char            *adrr;
    unsigned int    size;
    int             i = 0;
    int             j = 0;
    long            adress;

//    adrr = malloc(sizeof(char) * 10000000);
//    adrr = "tototititititititititi";
    adrr = "Bonjour les aminches\n\n\nc est fo u\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n \n";

    size = 92;

//    j = size - 127;

//    while (j < size)
  
//    {
//        adrr[j] = i;
//        i++;
//        j++;
//        
//    }

    ft_print_memory(adrr, size);
    return (0);
}
