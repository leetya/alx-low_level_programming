#include "main.h"
#include <stdio.h>

/**
 * _islower - print the alphabet to the stdout
 * @c: the value to check.
 * Return: 1 if c is lowercase, 0 otherwise.
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

