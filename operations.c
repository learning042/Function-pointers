#include <stdio.h>

int	add(int a, int b)
{
	return (a + b);
}

int	sub(int a, int b)
{
	return (a - b);
}

int	mult(int a, int b)
{
	return (a * b);
}

int	div(int a, int b)
{
	return (a / b);
}

int	mod(int a, int b)
{
	return (a % b);
}

int	calc(int a, int b, int (*op)(int, int))
{
	return (op(a,b)); 
}

int	main(void)
{
	// callback
	int	a = 5;
	int	b = 2;

	printf("%i + %i = %i\n", a, b, calc(a, b, add));
	printf("%i - %i = %i\n", a, b, calc(a, b, sub));
	
	// array of function pointers
	int	(*op[])(int, int) = {mult, div, mod};
	printf("%i * %i = %i\n", a, b, op[0](a, b));
	printf("%i / %i = %i\n", a, b, op[1](a, b));
	printf("%i %% %i = %i\n", a, b, op[2](a, b));

	return (0);
}
