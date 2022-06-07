#include "main.h"

/**
* print_last_digit - prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Return: last digit
*/
int print_last_digit(int n)
{
	int lastd;

	lastd = n % 10;
	if (lastd < 0)
		{
		_putchar(lastd + '0');
	return (-lastd);
		}
	else
	{
	_putchar(lastd + '0');
	return (lastd);
	}
}
