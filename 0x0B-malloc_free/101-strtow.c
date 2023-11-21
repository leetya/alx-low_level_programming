#include "main.h"
#include <stdlib.h>

/**
 * ft_cwrd - sf
 * @s: s
 * @c: c
 * Return: int
*/

int	ft_cwrd(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			count++;
		if ((s[i] == c && s[i + 1] != c) && (s[i] == c && s[i + 1] != '\0'))
			count++;
		i++;
	}
	return (count);
}

/**
 * ft_free - sf
 * @spl: s
 * @j: c
 * Return: p
*/

void	*ft_free(char **spl, int j)
{
	j -= 1;
	while (j > 0)
	{
		free(spl[j]);
		j--;
	}
	free(spl);
	return (NULL);
}

/**
 * ft_wordlen - sf
 * @s: s
 * @c: c
 * Return: i
*/

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/**
 * ft_split - sf
 * @s: s
 * @c: c
 * Return: s
*/

char	**ft_split(char const *s, char c)
{
	int		fc_wnbr;
	int		wlen;
	int		i;
	int		j;
	char	**d;

	if (!s || !*s)
		return (NULL);
	d = malloc((ft_cwrd(s, c) + 1) * sizeof(char *));
	if (!d)
		return (NULL);
	i = 0;
	j = 0;
	fc_wnbr = ft_cwrd(s, c);
	while (j < fc_wnbr)
	{
		while (s[i] == c)
			i++;
		wlen = ft_wordlen(&s[i], c);
		d[j] = ft_substr(s, i, wlen);
		if (d[j] == NULL)
			return (ft_free(d, j));
		j++;
		i += wlen;
	}
	d[j] = NULL;
	return (d);
}
