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
 * word_lenght - test
 * @str: test
 * Return: test
*/

int word_lenght(char *str)
{
	int len = 0;

	while (*str && *str == ' ')
		str++;
	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * strtow - test
 * @str: test
 * Return: test
*/

char **strtow(char *str)
{
	char **new;
	int	words, i, j, space;

	if (!str || !*str)
		return (NULL);
	words = how_many_words(str);
	new = malloc(sizeof(char *) * (words + 1));
	if (!new)
		return (NULL);
	new[words] = NULL;
	i = 0;
	j = 0;
	space = 0;
	while (*str)
	{
		j = 0;
		while (*str != ' ')
		{
			new[i - 1][j++] = *str;
			space = 0;
			str++;
		}
		if (*str == ' ' && !space)
		{
			words = word_lenght(str);
			if (!words)
				break;
			new[i] = malloc(sizeof(char) * (words + 1));
			i++;
			space = 1;
		}
		str++;
	}
	return (new);
}
