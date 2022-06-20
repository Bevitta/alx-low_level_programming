#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the given string
 * @c: character to locate
 * Return: pointer to c or NULL if c not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
