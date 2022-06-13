#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string
 * @str: the string
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[x]);
		x++;
	}

	_putchar('\n');
}
