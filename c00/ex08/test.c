#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	float	test;
	float	caca_prout;

	test = 5;
	caca_prout = 2;
	printf("sizof(int) = %d\n", sizeof(int));
	printf("sizof(char) = %d\n", sizeof(char));
	printf("sizof(long) = %d\n", sizeof(long));
	printf("sizof(double) = %d\n", sizeof(double));
	printf("sizof(float) = %d %f\n", sizeof(test), test / caca_prout);
	return 0;
}
