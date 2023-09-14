#include "main.h"
#include <stdio.h>
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
*/

void print_triangle(int size)
{
	int  j, k, printed;

	j = 1;
	if (size <= 0)
		putchar('\n');
		for (j = 0; j < size; j++)
		{
			printed = size;
			for (k = j; k < size - 1; k++)
			{
				putchar(' ');
				printed--;
			}
			while (printed)
			{
				putchar('#');
				printed--;
			}
			putchar('\n');
		}
}
