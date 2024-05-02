#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 122;
	while (x >= 97)
	{
		write(1, &x, 1);
		x--;
	}
}
