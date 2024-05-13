#include <unistd.h>

void	ft_putstr (char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return ;
}

int	main(int ac, char *av[])
{
	int		a;
	char	*str;

	a = 1;
	while (a < ac)
	{
		ft_putstr(av[a]);
		write(1,"\n", 1);
		a++;
	}
	str = "ET VOILA LE TRAVAIL FINAL...";
	ft_putstr(str);
	return (0);
}
