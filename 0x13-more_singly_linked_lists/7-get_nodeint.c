#include "lists.h"

/**
 * get_nodeint_at_index - get node by index
 * @head: list
 * @index: i
 * Return: the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		index--;
	}
	if (!index)
		return (head);
	return (NULL);
}
