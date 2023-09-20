#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string1
 * @s2: string2
 * Return: int value
*/

int _strcmp(char *s1, char *s2)
{
	int res;

	res = 0;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
    return (res);
}
