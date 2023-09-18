#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9).
 * @c: the value
 * Return: 1 if c is a digit, else 0.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
			return (1);
	else
			return (0);
}

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the string to be converted
 * Return: the int value.
*/

int _atoi(char *s)
{
	int res;
	int sign;
	int n;

	res = 0;
	sign = 1;
	n = 0;
	while ((*s >= 7 && *s <= 11) || *s == 32
		|| !_isdigit(*s))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (_isdigit(*s))
	{
		n = *s - 48;
		res = (res * 10) + n;
		s++;
	}
	return (res * sign);
}
