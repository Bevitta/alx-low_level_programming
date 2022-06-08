#include<stdio.h>

/**
 * main - prints 50 first Fibonacci numbers,
 * starting with 1 and 2
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a, b, sum, next;
	int c;

	a = 1;
	b = 2;
	sum = 0;
	for (c = 1; c <= 33; c++)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			sum = sum + a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	printf("&lu\n", sum);
	return (0);
}
