#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: the string to be converted
 * Return: the int value.
*/

int _atoi(char *s)
{
	unsigned int res;
	int sign;
	int n;

	res = 0;
	sign = 1;
	n = 0;
	if (!*s)
		return (0);
	while ((*s >= 7 && *s <= 11) || *s == 32
		|| !(*s >= '0' && *s <= '9'))
	{
		if (!*s)
			break;
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while ((*s >= '0' && *s <= '9'))
	{
		n = *s - 48;
		res = (res * 10) + n;
		s++;
	}
	return (res * sign);
}
