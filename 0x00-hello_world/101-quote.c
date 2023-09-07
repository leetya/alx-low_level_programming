/**
* main - this is the entry point
* Description: this is a program that print a string to the stderr. using write
* Return: the program always returns 1.
*/

#include <unistd.h>

int	main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
