#include <stdio.h>

/**
 * main - prints 50 first Fibonacci numbers,
 * starting with 1 and 2
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, c, next;

	a = 1;

	b = 2;

	for (c = 1; c <= 50; c++)
	{
		if (a != 20365011074)
		{
			printf("%ld, ", a);
		} else
		{
			printf("%ld\n", a);
		}
		next = a + b;
		a = b;
		b = next;
	}

	return (0);
}
