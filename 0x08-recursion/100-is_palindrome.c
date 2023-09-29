#include "main.h"

/**
 * actual_palindrome - a helper function
 * @s: the string
 * @start: the first char
 * @end: the last char
 * Return: 1 if palindrome 0 if not.
*/

int actual_palindrome(char *s, int start, int end)
{
	if (!s[start])
		return (1);
	if (s[start] != s[end])
		return (0);
	return (actual_palindrome(s, ++start, --end));
}

/**
 * is_palindrome - check if the string is palindrome
 * @s: the string
 * Return: 1 if palindrome 0 if not.
*/

int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (actual_palindrome(s, 0, strlen(s) - 1));
}
