#include "main.h"

/**
 * main - a program that pritns its name
 * @ac: argument count
 * @av: arguments
 * Return: always 0.
*/

int main(int ac, char **av)
{
	int i;

	(void)ac;
	for (i = 0; av[i]; i++)
		printf("%s\n", av[i]);
	return (0);
}
