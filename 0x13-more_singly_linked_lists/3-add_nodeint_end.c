#include "lists.h"

/**
 * add_nodeint_end - add
 * @head: ptohead
 * @n: n_val
 * Return: listint_t*
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
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
