#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0' || s2[x] == '\0')
			break;
		x++;
	}
	if (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	else
		return (s1[x] - s2[x]);
}
