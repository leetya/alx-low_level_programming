#include "main.h"

/**
 * coins_change - this is the function where the algorith is done
 * @av: arguments lists.
 * Return: the change.
*/

int	coins_change(char **av)
{
	int change, cents, i;
	int arr[5] = {25, 10, 5, 2, 1};

	change = 0;
	cents = atoi(av[1]);
	for (i = 0; i < 5; i++)
	{
		if (cents / arr[i] == 1 && cents % arr[i] == 0)
			return (1);
	}
	i = 0;
	while (i < 5)
	{
		if (arr[i] <= cents)
		{
			cents -= arr[i];
			change++;
		}
		if (arr[i] > cents)
			i++;
	}
	return (change);
}

/**
 * main - a program that pritns its name
 * @ac: argument count
 * @av: arguments
 * Return: always 0.
*/

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (av[1][0] == '-')
	{
		printf("0\n");
	}
	else
		printf("%d\n", coins_change(av));
	return (0);
}
