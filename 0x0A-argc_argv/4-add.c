#include "main.h"

/**
 * main - prints its name
 * @ac: args count
 * @av: args val
 * Return: 0
*/

int main(int ac, char **av)
{
	int i, j, res = 0;

	if (ac == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < ac; i++)
	{
		j = 0;
		for (j = 0; av[i][j]; j++)
		{
			if (!isdigit(av[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(av[i]);
	}
	printf("%d\n", res);
	return (0);
}
