#include "main.h"

/**
 *print_last_digit - prints last digit
 *of number
 *
 *@n: input number as an interger
 *
 *Return: lastdigit
 */
int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	return (lastdigit);
}
