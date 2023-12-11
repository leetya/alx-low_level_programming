#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list
 * Return: nb
*/

size_t print_listint(const listint_t *h)
{
	size_t nb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nb++;
	}
	printf("(nil)\n");
	return (nb);
}
