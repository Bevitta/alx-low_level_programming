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
	char a[] = "_putchar";
	int i = 0;

		for (i = 0; i < 8; i++)
		{
			_putchar(a[i]);
		}
	_putchar('\n');

	return (0);
}
