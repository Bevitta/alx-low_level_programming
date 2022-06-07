#include "main.h"

/**
 * print_alphabet_x10 - will print alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter = 'a';

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		i++;
	}
}
