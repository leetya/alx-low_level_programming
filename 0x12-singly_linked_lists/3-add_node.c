#include "lists.h"

/**
 * add_node - add
 * @head: ptohead
 * @str: str_val
 * Return: list_t*
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tmp;
	size_t nb;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	nb = 0;
	while (str[nb])
		nb++;
	new->len = nb;
	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp)
	{
		if (!tmp->next)
		{
			tmp->next = new;
			break;
		}
		tmp = tmp->next;
	}
	return (new);
}
