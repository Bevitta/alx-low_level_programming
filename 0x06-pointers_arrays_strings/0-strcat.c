#include "main.h"

/**
 *_strcat - appends one string to another string
 *@dest: the destination string to append to
 *@src: the source string
 *Return: dest string
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
