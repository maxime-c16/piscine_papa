#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*a;

	a = "abcdefghijklmnopqrstuvwxyz";
	write(1, a, 26);
	return ;
}
