#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is a given string
 * Return: no return
 */
void rev_string(char *s)
{
	int x, y, i;
	char rev[100];

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	y = x - 1;
	for (i = 0; i < x; i++)
	{
		rev[i] = s[y];
		y--;
	}
	putchar('\n');
}
