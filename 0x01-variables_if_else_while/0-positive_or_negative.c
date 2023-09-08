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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    printf("%d ", n);
    n > 0 ? printf("is positive\n") : n == 0 ? printf("is zero") : printf("is negative\n");
	return (0);
}