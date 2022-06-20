#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: points to mameory area
 * @n: first n bytes of memory area
 * @b: given constant byte
 * Return: pointer to the memory print
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
