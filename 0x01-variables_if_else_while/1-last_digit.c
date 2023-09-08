#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this is the entry point
* Description: this is a program that check a number sign.
* Return: the function always returns 0.
*/

int main(void)
{
	int n;
	int	last;

	srand(time(0));
	n = 98;
	last = n % 10;
	printf("Last digit of %d is %d and is ", n, last);
	if (last > 5)
		printf("greater than 5\n");
	else if (last == 0)
		printf("0\n");
	else if (last < 6)
		printf("less than 6 and not 0\n");
	return (0);
}
