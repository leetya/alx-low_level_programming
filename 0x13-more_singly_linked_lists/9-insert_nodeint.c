#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: list
 * @idx: pos
 * @n: new node value
 * Return: add
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *tmp2;
	listint_t *new;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (tmp && idx)
	{
		idx--;
		if (idx - 1 == 0)
		{
			tmp2 = tmp->next;
			tmp->next = new;
			new->next = tmp2;
			return (new);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
