#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	b = 48;
	c = 48;
	while (a <= 57)
	{	
		while (b <= 57)
		{
			while (c <= 57)
			{
				if (a < b)
				{
					if (b < c)
					{
						write(1, &a, 1);
						write(1, &b, 1);
						write(1, &c, 1);
						write(1, " ", 1);
					}
				}
				c++;
			}
			c = 48;
			b++;
		}
	b = 48;
	a++;
	}
	return ;
}
