#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabet to the stdout
*/

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
