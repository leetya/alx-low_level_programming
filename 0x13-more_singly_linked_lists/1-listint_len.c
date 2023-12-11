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
