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
	new->next = *head;
	*head = new;
	return (*head);
}
