#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcode
 * @ac: args count
 * @av: args vals;
 * Return: 0;
*/

int main(int ac, char **av)
{
	int bytes, i;
	char *add;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(av[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	add = (char *)main;
	for (i = 0; i < bytes - 1; i++)
		printf("%02hhx ", add[i]);
	printf("%02hhx\n", add[i]);
	return (0);
}
