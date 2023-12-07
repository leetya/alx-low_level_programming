#include "lists.h"

/**
 * add_node - ass
 * @head: ptohead
 * @str: str_val
 * Return: list_t*
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nb;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	nb = 0;
	while (str[nb])
		nb++;
	new->len = nb;
	new->next = *head;
	*head = new;
	return (*head);
}
