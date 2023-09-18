#include "main.h"

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
