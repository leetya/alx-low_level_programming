#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
*/

void print_triangle(int size)
{
	int  j, k, printed;

	j = 1;
	if (size <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		printed = size;
		for (k = j; k < size - 1; k++)
		{
			_putchar(' ');
			printed--;
		}
		while (printed)
		{
			_putchar('#');
			printed--;
		}
		_putchar('\n');
	}
}
