#include "main.h"

/**
 * *string_toupper - changes lowercase letters
 * to uppercase letters
 * @s: a pointer
 * Return: s
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (s);
}
