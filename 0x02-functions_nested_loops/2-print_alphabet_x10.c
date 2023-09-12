#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabet to the stdout
*/

void print_alphabet(void)
{
	int a = 'a';

	for (int i = 10; i != 0; i--)
	{
		for (int j = 97; j <= 122; j++)
			_putchar(j);
		_putchar('\n');
	}
}
