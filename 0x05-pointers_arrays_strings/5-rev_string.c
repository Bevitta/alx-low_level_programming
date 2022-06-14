#include "main.h"

/**
 * rev_string - reverses a string
 * @s: is a given string
 * Return: no return
 */
void rev_string(char *s)
{
	int x, y, i;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (i = 0; i <= x / 2; i++)
	{
		y = s[i];
		s[i] = s[x - i - 1];
		s[x - i - 1] = y;
	}
}
