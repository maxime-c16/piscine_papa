//#include<unistd.h>
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	div;
	int mod;
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	return ;
}


//int	main (void)
//{
//	int	a;
//	int	b;
//	int	*pointeur_de_a;
//	int	*pointeur_de_b;
//	
//	a = 5;
//	b = 2;
//	pointeur_de_a = &a;
//	pointeur_de_b = &b;
//
//	printf("a, avant division = %d\n", *pointeur_de_a);
//	printf("b, avant division = %d\n", *pointeur_de_b);
//	ft_ultimate_div_mod(pointeur_de_a, pointeur_de_b);
//	printf("resultat division = %d\n", *pointeur_de_a);
//	printf("resultat modulo   = %d\n", *pointeur_de_b);
//	return (0);
//}
