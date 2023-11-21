#include <stdlib.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **res, *tmp;
	int i, res_ind = 0, len = 0,
	words, c = 0, start, end;

	len = _strlen(str);
	words = count_word(str);
	if (words == 0)
		return (NULL);
	res = (char **) malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				res[res_ind] = tmp - c;
				res_ind++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	res[res_ind] = NULL;
	return (res);
}
