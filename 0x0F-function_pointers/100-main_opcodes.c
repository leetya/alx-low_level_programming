#include "function_pointers.h"

/**
 * main - print opcode
 * @ac: args count
 * @av: args vals;
 * Return: 0;
*/

int main(int ac, char **av)
{
	int bytes, i;
	unsigned char *add;

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
	add = (unsigned char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", add[i]);
	}
	printf("\n");
	return (0);
}
