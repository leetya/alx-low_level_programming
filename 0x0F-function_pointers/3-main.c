#include "3-calc.h"

/**
 * main - entry point
 * @ac: args count
 * @av: args vals
 * Return: 0 on success
*/

int main(int ac, char **av)
{
	int num1, num2;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!av[2] || !*av[2])
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	f = get_op_func(av[2]);
	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", f(num1, num2));
	return (0);
}
