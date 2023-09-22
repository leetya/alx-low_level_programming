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
 * separator - check if it is a separator
 * @c: the value to be checked
 * Return: 1 if true 0 if false
*/

int separator(int c)
{
	if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?'
	|| c == 34 || c == '(' || c == ')'
	|| c == '{' || c == '}' || c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

/**
 * cap_string - capitalise all words of a string
 * @s: the string
 * Return: the string itslef.
*/

char *cap_string(char *s)
{
	int i, cap;

	cap = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!cap && _isalpha(s[i]) && !_isupper(s[i]))
			s[i] -= 32;
		cap = 1;
		if (separator(s[i]))
			cap = 0;
	}
	return (s);
}
