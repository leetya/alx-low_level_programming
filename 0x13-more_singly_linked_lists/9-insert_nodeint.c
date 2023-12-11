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
	if (!idx)
	{
		add_nodeint(head, n);
		return (new);
	}
	new->n = n;
	while (*head && idx - 1 > 0)
	{
		idx--;
		*head = (*head)->next;
	}
	if (!idx - 1)
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
