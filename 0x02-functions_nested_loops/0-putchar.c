#include "main.h"

/**
 *main - prints _putchar
 *
 *Description: prints _putchar by invoking it
 *
 *Return: 0 (success)
 */
int main(void)
{
	char c[9] = "_putchar";
	int a = 0;

		for (a = 0; a < 9; a++)
		{
			_putchar(c[a]);
		}
	_putchar("\n");

	return (0);
}
