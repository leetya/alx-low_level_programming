#include "lists.h"

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
 * add_node - ass
 * @head: ptohead
 * @str: str_val
 * Return: list_t*
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (!head)
		return (NULL);
	if (!str)
		str = "(nil)";
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
		return (NULL);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
