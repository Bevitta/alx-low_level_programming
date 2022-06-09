#include "holberton.h"
/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int r, c, x;

	if (size <= 0)
		_putchar(10);
	for (r = 0; r < size; r++)
	{
		for (c = size - r; c > 1; c--)
			_putchar(' ');
		for (x = r + c; x >= 1; x--)
			_putchar('#');
		_putchar(10);
	}
}
