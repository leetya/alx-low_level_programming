#include "main.h"

/**
 * main - a program that pritns its name
 * @ac: argument count
 * @av: arguments
 * Return: always 0.
*/

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
