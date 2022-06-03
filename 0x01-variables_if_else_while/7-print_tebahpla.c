#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * then prints new line, use putchar 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
