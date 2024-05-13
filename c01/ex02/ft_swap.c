void	ft_swap(int *a, int*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
	return ;
}


//int	main(void)
//{
//	int		a;
//	int		b;
//	char	cha;
//	char	chb;
//
//	a = 1;
//	b = 2;
//	cha = a + 48;
//	chb = b + 48;
//	write(1, "avant inversion:\n", 17);
//	write(1, &cha, 1);
//	write(1, " ", 1);
//	write(1, &chb, 1);
//	ft_swap(&a, &b);
//	cha = a + 48;
//	chb = b + 48;
//	write(1, "\napres inversion:\n", 18);
//	write(1, &cha, 1);
//	write(1, " ", 1);
//	write(1, &chb, 1);
//	return (0);
//}
