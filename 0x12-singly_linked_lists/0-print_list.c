#include "lists.h"

/**
 * @print_list - prints
 * @h: linked list
 * Return: size_t 
 */

size_t print_list(const list_t *h)
{
	size_t nb;

	if (!h)
		return (0);
	nb = 0;
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		h = h->next;
		nb++;
	}    
	return (nb);
}
