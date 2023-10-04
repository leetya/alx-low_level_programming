#include "main.h"

/**
 * how_many_words - test;
 * @str: test
 * Return: test
*/

int how_many_words(char *str)
{
	int space = 0, len = 0;

	while (*str)
	{
		if (*str == ' ')
			space = 0;
		if (*str != ' ' && !space)
		{
			len++;
			space = 1;
		}
		str++;
	}
	return (len);
}

/**
 * allocate_and_fill - test
 * @str: test
 * @new: test
 * @pos: test
 * Return: test
*/

char *allocate_and_fill(char *str, char **new, int pos)
{
	int i = 0;

	while (str[i] && str[i] != ' ')
	{
		i++;
	}
	new[pos] = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (*str && *str != ' ')
	{
		new[pos][i] = *str;
		str++;
		i++;
	}
	new[pos][i] = '\0';
	return (--str);
}

/**
 * strtow - test
 * @str: test
 * Return: test
*/

char **strtow(char *str)
{
	char **new;
	int	words, i;

	if (!str || !*str)
		return (NULL);
	words = how_many_words(str);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	new[words] = NULL;
	i = 0;
	while (*str)
	{
		if (*str != ' ')
			str = allocate_and_fill(str, new, i++);
		str++;
	}
	return (new);
}
