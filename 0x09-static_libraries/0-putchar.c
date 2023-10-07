#include "main.h"

/**
 * ft_puts - print a string to the stdout
 * @str: the string to be printed.
*/

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
