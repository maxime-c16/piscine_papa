#include <unistd.h>

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 48;
	b = 48;
	c = 48;
	d = 48;
	while(a <=57)
	{
		while(b <= 57)
		{
			while(c <= 57)
			{
				while(d <= 57)
				{
					write(1, &a, 1);
					write(1, &b, 1);
					write(1, " ", 1);
					write(1,&c, 1);
					write(1,&d, 1);
					write(1,", ", 2);
					d++;
				}
				d = 48;
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
