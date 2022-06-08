#include<stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;
	int a = 0, b = 1;
	int nextTerm = a + b;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; ++i)
	{
		printf("%d, ", nextTerm);
		a = b;
		b = nextTerm;
		nextTerm = a + b;
	}
	return (0);
}
