#include "main.h"

/**
 * _isdigit - checks for a digit 0 to 9
 *
 * @c: is integer number
 * Return: 1 if its a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
