#include "lists.h"

/**
 * list_len - length
 * @h: linked list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t nb;

	if (!h)
		return (0);
	for (nb = 0; h; h = h->next)
		nb++;
	return (nb);
}
