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

	if (!head || !*head)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (*head && idx - 1)
	{
		idx--;
		*head = (*head)->next;
	}
	if (!idx - 1 || !idx)
	{
		tmp2 = (*head)->next;
		(*head)->next = new;
		new->next = tmp2;
		*head = tmp;
		return (new);
	}
	*head = tmp;
	return (NULL);
}
