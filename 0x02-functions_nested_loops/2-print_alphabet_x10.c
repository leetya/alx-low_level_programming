#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - (print the alphabet x 10) to the stdout
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 10; i != 0; i--)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}

