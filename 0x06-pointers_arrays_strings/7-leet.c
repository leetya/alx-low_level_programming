#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: the string
 * Return: the string itself
*/

char *leet(char *s)
{
	int i, j;
	char table[2][5] = {
		{'a', 'e', 'o', 't', 'l'},
		{'4', '3', '0', '7', '1'}
	};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == table[0][j] || s[i] == table[0][j] - 32)
				s[i] = table[1][j];
		}
	}
	return (s);
}
