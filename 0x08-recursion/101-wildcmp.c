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
	if (!*s || !*ss)
		return (1);
	if (*s == *ss && flag)
		flag = 0;
	if (*ss == '*')
	{
		flag = 1;
		if (*s == *(s + 1))
			s++;
		wildcmp_rec(s, ++ss, flag);
	}
	if (*s != *ss && !flag)
		return (0);
	if (!flag)
		ss++;
	return (wildcmp_rec(++s, ss, flag));
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
	if (!*s1 && !*s2)
		return (1);
	if (!*s1 && *s2 == '*' && strlen(s2) == 1)
		return (1);
	return (wildcmp_rec(s1, s2, 0));
}
