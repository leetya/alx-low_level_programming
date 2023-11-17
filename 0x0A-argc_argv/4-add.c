#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: the value
 * Return: 1 if c is a digit, else 0.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

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
		printf("0\n");
		return (0);
	}
	for (i = 1; i < ac; i++)
	{
		j = 0;
		for (j = 0; av[i][j]; j++)
		{
			if (!_isdigit(av[i][j]))
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
