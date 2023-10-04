#include "main.h"

/**
 * how_many_words - a helper function that count how many words in a string
 * words are separated by spaces;
 * @str: the string
 * Return: how many words
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
 * allocate_and_fill - a helper function that allocate
 * and fill the content of the matrix
 * @str: the string to be splited
 * @new: the matrix
 * @pos: the pos of the n'th element
 * Return: the new position of str
*/

char *allocate_and_fill(char *str, char **new, int pos)
{
	int i = 0;

	while (str[i] && str[i] != ' ')
	{
		i++;
	}
	new[pos] = malloc(sizeof(char) * (i + 1));
	if (!new[pos])
		return (NULL);
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
 * strtow - a function that splits a string into words.
 * @str: the string to be splited
 * Return: a pointer to the matrix
*/

char **strtow(char *str)
{
	char **new;
	int	words, i;

	if (!str || !*str)
		return (NULL);
	words = how_many_words(str);
	if (!words)
		return (NULL);
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
