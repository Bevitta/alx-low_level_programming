#include "main.h"

/**
 * print_line - will print a straight line at the terminal
 * @n: determines the length of the line
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
