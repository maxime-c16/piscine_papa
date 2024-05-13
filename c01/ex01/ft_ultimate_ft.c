#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
	return ;
}


// je garde le main en info, j'ai trop galéré à comprendre ces putains d'appel de fonction aux pointeurs de pointeurs ....
//int	main(void)
//{
//	int		a;
//	int		*b;
//	int		**c;
//	int		***d;
//	int		****e;
//	int		*****f;
//	int		******g;
//	int		*******h;
//	int		********i;
//	int		*********j;
//	char	cha;
//	char	chb;
//	
//	j = &i;
//	i = &h;
//	h = &g;
//	g = &f;
//	f = &e;
//	e = &d;
//	d = &c;
//	c = &b;
//	b = &a;
//	ft_ultimate_ft(j);
//	cha = (a / 10) + 48;
//	chb = (a % 10) + 48;
//	write(1, &cha, 1);
//	write(1, &chb, 1);
//	return (0);
//}
