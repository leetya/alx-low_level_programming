#include "lists.h"

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
 * pop_listint - delete head node
 * @head: list
 * Return:  head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	int nb = 0;
	listint_t *tmp;

	if (!*head)
		return (nb);
	tmp = *head;
	nb = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (nb);
}

/**
 * delete_nodeint_at_index - delete node at index
 * @head: list
 * @index: i
 * Return: -1 || 1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *tmpn;

	if (!head || !*head)
		return (-1);
	if (i > listint_len(*head))
		return (-1);
	if (!index)
	{
		pop_listint(head);
		return (1);
	}
	while (*head && i < index - 1)
	{
		i++;
		*head = (*head)->next;
	}
	tmpn = (*head)->next;
	(*head)->next = tmpn->next;
	free(tmpn);
	*head = tmp;
	return (1);
}
