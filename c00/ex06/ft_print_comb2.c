#include <unistd.h>

int print(int nb)
{
	char	a;
	char	b;

	a = (nb / 10) + 48;
	b = (nb % 10) + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	return (0);
}


int ft_print_comb2(void)
{
	int	A;
	int	B;

	A = 0;
	B = 1;
	while(A <= 99)
	{
		while(B <= 99)
		{
			print(A);
			write(1, " ", 1);
			print(B);
			write(1, ", ", 2);
			B++;
		}
		A++;
		B = A + 1;
	}
	return (0);
}
