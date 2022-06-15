#include "main.h"

/**
 * _strncat - concatenates two strings using at
 * most n bytes from srs
 * @src: is source string
 * @n: nuber of bytes in src
 * @dest: is destination
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

