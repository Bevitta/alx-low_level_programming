#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: is an integer
 *
 *Return: 1 if n is greater than 0, -1 if n is less than 0
 */
int print_sign(int n);
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 1)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

