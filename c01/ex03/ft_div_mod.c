// #include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}


//int	main(void)
//{
//	int		a;
//	int		b;
//	int		div;
//	int		mod;
//	char	cha;
//	char	chb;
//
//	a = 5;
//	b = 2;
//	ft_div_mod(a, b, &div, &mod);
//	cha = div + 48;
//	chb = mod + 48;
//	write(1, &cha, 1);
//	write(1, &chb, 1);
//	return (0);
//}


