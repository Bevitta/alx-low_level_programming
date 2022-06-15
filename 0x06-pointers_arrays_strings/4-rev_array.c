#include "main.h"

/**
 * reverse_array - reverses the content of an
 * array of integers
 * @n: the number of elements to swap
 * @a: array of integers
 * Return: reversed array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
