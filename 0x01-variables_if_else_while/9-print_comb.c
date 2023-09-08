#include <stdio.h>
#include <unistd.h>

/**
* main - this is the entry point
* Description: this is a program that check a number sign.
* Return: the function always returns 0.
*/

int	main(void)
{
	int nb = 0;

	while (nb <= 9)
	{
		putchar(nb + 48);
		if (nb != 9)
		{
			putchar(',');
			putchar(' ');
		}
		nb++;
	}
	putchar('\n');
	return (0);
}
