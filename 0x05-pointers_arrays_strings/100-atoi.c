#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: given string
 * Return: integer values
 */
int _atoi(char *s)
{
	int result = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		result = result * 10 + s[i] - '0';

	return (result);
}
