#include "main.h"

/**
 * puts2 - print alternating characters of string
 * @str: is the given string
 * Return: nothing
 */

void puts2(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
