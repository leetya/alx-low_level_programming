#include "lists.h"

/**
 * free_listint2 - frees and set to null
 * @head: fnode
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
