#include "3-calc.h"

/**
 * op_add - operat
 * @a: nb1
 * @b: nb2
 * Return: val
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - operat
 * @a: nb1
 * @b: nb2
 * Return: val
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - operat
 * @a: nb1
 * @b: nb2
 * Return: val
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - operat
 * @a: nb1
 * @b: nb2
 * Return: val
*/

int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
 * op_div - operat
 * @a: nb1
 * @b: nb2
 * Return: val
*/

int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
