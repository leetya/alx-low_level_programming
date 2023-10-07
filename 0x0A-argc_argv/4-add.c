#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - a program that pritns its name
 * @ac: argument count
 * @av: arguments
 * Return: always 0.
*/

int main(int ac, char **av)
{
	int i, j, res;

	res = 0;
	if (ac > 1)
	{
		for (i = 1; av[i]; i++)
		{
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
	}
	else
		printf("0\n");
	return (0);
}
