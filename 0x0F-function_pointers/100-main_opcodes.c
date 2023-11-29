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
	int (*f)(int, char **);

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
	f = main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02x ", (unsigned char)f);
	}
	printf("\n");
	return (0);
}
