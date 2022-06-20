#include "main.h"

/**
 * _memcpy() - copies bytes from one memory location to another memory location
 * @src: first memory area
 * @dest: destination memory area
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x, y;

	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return (dest);
}
