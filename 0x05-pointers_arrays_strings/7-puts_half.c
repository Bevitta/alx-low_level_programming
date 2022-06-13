#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: given string.
 * Return: nothing
 */
void puts_half(char *str)
{
	int x, i;

	x = 0;
	while (x >= 0)
	{
		if (str[x] == '\0')
			break;
		x++;
	}

	if (x % 2 == 1)
		i = x / 2;
	else
		i = (x - 1) / 2;

	for (i++; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');
}
