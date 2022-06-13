#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string
 * @str: the string
 * Return: no return
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
