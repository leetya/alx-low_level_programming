#include <stdio.h>
#include <unistd.h>

/**
* main - this is the entry point
* Description: this is a program that check a number sign.
* Return: the function always returns 0.
*/

int	main(void)
{
	int nb;
	int nb2;

	nb = 0;
	while (nb < 9)
	{
		nb2 = nb + 1;
		while (nb2 <= 9)
		{
			putchar(nb + 48);
			putchar(nb2 + 48);
			if (nb != 8)
			{
				putchar(',');
				putchar(' ');
			}
			nb2++;
		}
		nb++;
	}
	putchar('\n');
	return (0);
}
