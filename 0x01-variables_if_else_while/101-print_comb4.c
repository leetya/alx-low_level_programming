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
	int nb3;

	nb = 0;
	while (nb < 8)
	{
		nb2 = nb + 1;
		while (nb2 <= 8)
		{
			nb3 = nb2 + 1;
			while (nb3 <= 9)
			{
				putchar(nb + 48);
				putchar(nb2 + 48);
				putchar(nb3 + 48);
				if (nb != 7)
				{
					putchar(',');
					putchar(' ');
				}
				nb3++;
			}
			nb2++;
		}
		nb++;
	}
	putchar('\n');
	return (0);
}
