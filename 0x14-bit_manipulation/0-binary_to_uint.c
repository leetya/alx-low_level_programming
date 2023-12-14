#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the length of the string
*/

int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _pow_recursion - the value of x raised to the power of Y
 * @x: the number
 * @y: the power
 * Return: x to the power of y
*/

unsigned int _pow_recursion(unsigned int x, unsigned int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}

/**
 * binary_to_uint - converts an binary to unsigned int
 * @b: the binary as str
 * Return: uint
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int pow = 1, res = 0;
	int len;

	if (!b)
		return (0);
	len = _strlen(b);
	len--;
	while (len != -1)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] != '0')
			res += (pow);
		pow *= 2;
		len--;
	}
	return (res);
}

