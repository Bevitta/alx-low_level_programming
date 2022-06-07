#include "main.h"

/**
 *print_alphabet - prints out alphabet using _putchar
 *
 *Return: 0 (success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
