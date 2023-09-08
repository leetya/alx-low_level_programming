#include <stdio.h>
#include <unistd.h>

/**
* main - this is the entry point
* Description: this is a program that check a number sign.
* Return: the function always returns 0.
*/

int	main(void)
{
	char a = '0';

	while (a <= '9')
		putchar(a++);
	putchar('\n');
	return (0);
}
