#include "main.h"

/**
 * _strlen_recursion - the length of a string.
 * @s: the string to be counted
 * Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
