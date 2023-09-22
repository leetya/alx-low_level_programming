#include "main.h"

/**
 * _isupper -  a function that checks for uppercase character.
 * @c: the value to be checked
 * Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

/**
 * _isalpha - check if c a letter
 * @c: the value to be checked
 * Return: 1 if c a letter, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: the string
 * Return: the string itself
*/

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isalpha(s[i]) && !(_isupper(s[i])))
			s[i] -= 32;
	}
	return (s);
}
