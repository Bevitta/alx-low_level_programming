#include "main.h"

/**
 * print_times_table - prints time table
 * for numbers less that 15
 *
 * @n: is the input number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int a, b, result;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				result = a * b;
				if (result <= 9)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(32);
					_putchar(result + '0');
				}
				else if (result >= 10 && result <= 99)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(44);
					_putchar(32);
					_putchar(((result / 100) % 10) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar(10);
		}
	}
}
