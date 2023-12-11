#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: list
 * Return:  head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	int nb = 0;
	listint_t *tmp;

	if (!head)
		return (nb);
	nb = (*head)->n;
	tmp = *head;
	*head = tmp->next;
	if (tmp)
		free(tmp);
	return (nb);
}
