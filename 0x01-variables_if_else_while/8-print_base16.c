#include <stdio.h>
#include <unistd.h>

/**
* main - this is the entry point
* Description: this is a program that check a number sign.
* Return: the function always returns 0.
*/

int	main(void)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
			putchar(i + 48);
		else
			putchar(i + 87);
		i++;
	}
	/*
	*	solve the tax in other way.
	*   char *hexa = "0123456789abcdef";
	*	while (*hexa)
	*	{
	*		putchar (*hexa);
	*		hexa += 1;
	*	}
	*/
	return (0);
}
