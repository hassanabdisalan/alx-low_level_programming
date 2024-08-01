#include "lists.h"

/**
 * list_len - return the number of the elements in a linked list_t list
 * @h: pointer to the list_t list
 * Return: the number of the elemnets in the list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
