#include "main.h"

/**
 * main - a program that pritns its name
 * @ac: argument count
 * @av: arguments
 * Return: always 0.
*/

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
