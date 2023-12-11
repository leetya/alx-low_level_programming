#include "lists.h"

#include "lists.h"

/**
 * add_nodeint - add
 * @head: ptohead
 * @n: str_val
 * Return: listint_t*
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
 * listint_len -  prints all the elements of a listint_t list.
 * @h: list
 * Return: nb
*/


size_t listint_len(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		nb++;
		h = h->next;
	}
	return (nb);
}

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
	listint_t *new;
	unsigned int i = 0;

	if (!*head && idx != 0)
		return (NULL);
	tmp = *head;
	if (idx > listint_len(*head))
		return (NULL);
	if (!idx)
		return (add_nodeint(head, n));
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (*head && i < idx - 1)
	{
		i++;
		*head = (*head)->next;
	}
	new->next = (*head)->next;
	(*head)->next = new;
	*head = tmp;
	return (new);
}
