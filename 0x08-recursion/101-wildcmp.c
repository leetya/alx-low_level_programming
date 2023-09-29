#include "main.h"

/**
 * wildcmp_rec - the actual recurs
 * @s: the first string
 * @ss: the secong string
 * @flag: a flag to check if there is a special char
 * Return: 1 if identical 0 if not.
*/

int wildcmp_rec(char *s, char *ss, int flag)
{
	if (!*s && *ss && !flag)
		return (0);
	if (!*s)
		return (1);
	if (*s == *ss && flag)
		flag = 0;
	if (*ss == '*')
	{
		flag = 1;
		test(s, ++ss, flag);
	}
	if (*s != *ss && !flag)
		return (0);
	if (!flag)
		ss++;
	return (test(++s, ss, flag));
}

/**
 * wildcmp - compares two strings
 * and returns 1 if the strings can be considered identical,
 * @s1: the first string
 * @s2: the string to be compared with
 * Return: 1 if identical 0 if not.
*/

int wildcmp(char *s1, char *s2)
{
	return (wildcmp_rec(s1, s2, 0));
}