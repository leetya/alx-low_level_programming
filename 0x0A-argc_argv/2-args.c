#include "main.h"

/**
 * main - prints its name
 * @ac: args count
 * @av: args val
 * Return: 0
*/

int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
