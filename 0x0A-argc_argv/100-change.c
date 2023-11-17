#include "main.h"

/**
 * main - prints its name
 * @ac: args count
 * @av: args val
 * Return: 0
*/

int main(int ac, char **av)
{
	int nb, i, res = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	nb = atoi(av[1]);
	for (i = 0; i < 5; i++)
	{
		while (nb >= coins[i])
		{
			nb -= coins[i];
			res++;
		}
	}
	printf("%d\n", res);
	return (0);
}
