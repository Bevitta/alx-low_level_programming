#include "main.h"

/**
 * print_line - will print a straight line at the terminal
 * @n: determines the length of the line
 */
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar(45);
	_putchar(10);
}
