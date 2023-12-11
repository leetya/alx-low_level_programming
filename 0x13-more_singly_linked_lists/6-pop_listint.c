#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: list
 * Return:  head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	int nb = 0;

	if (!head)
		return (nb);
	nb = (*head)->n;
	*head = (*head)->next;
	return (nb);
}
