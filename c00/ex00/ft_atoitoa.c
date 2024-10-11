/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcauchy <coherence.ing@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:27:03 by mcauchy           #+#    #+#             */
/*   Updated: 2024/10/11 15:25:00 by lcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoitoa(char *str)
{
	int			signe;
	long long	integer;
	int			i;
	int			j;
	int			len;
	char		*ascii;
	int			a;
	int			b;
	
	// ft_atoi...................25 lignes......................................	
	i		= 0;
	signe	= 1;
	integer = 0;
	if (((str[0]<'0' || str[0]>'9') && str[0]!='-' && str[0]!='+')
	|| ((str[0]=='-' || str[0]=='+') && (str[1]<'0') || str[1]>'9'))
	return (-1);
	if (str[0] == '-' || str[0] == '+')
	{	
		i++;
		if (str[0] == '-')
		signe = -1;
	}
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		break;
		integer = integer * 10 + (str[i] - 48);
		if (integer > 2147483647 && signe > 0)
			return (-1);
		if (integer > 2147483648 && signe < 0)
			return (0);
		i++;
	}
	integer = integer*signe;
	printf("argument in integer = %ld\n", integer);
	
	// ft-itoa.................30 lignes.......................................
	len = 1;
	j = llabs(integer) / 10;
	while(j > 0 )
	{
		j = j / 10;
		len ++;
	}
	ascii = malloc(sizeof(char) * len);
	if (integer < 0)
	{
		integer *= -1;
		ascii[0] = '-';
		len++;
	}
	a = integer / 10;
	b = integer % 10;
	ascii[len-1] = b + 48;
	while(a > 10)
	{
		b = a % 10;
		a = a / 10;
		len--;
		ascii[len-1] = b + 48;
	}
	ascii[len-2] = a + 48;
	if(integer<10 && integer>0)
	ascii[len-2] = '-';
	printf("argument in ascii   = %s\n", ascii);
	return (0);
}

int main(int ac, char **av)
{
//	long long	j;
//	long long	integer;
//	integer=2147483648;
//	j = llabs(integer);
//	printf("integer=%lld\n", j);
	ft_atoitoa(av[1]);
	return (0);
}
