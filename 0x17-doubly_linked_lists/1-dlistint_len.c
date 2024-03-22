#include "lists.h"

/**
 * dlistint_len - function thats returns the size of the list
 * @h: pointer to the first node of the list
 * return: size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t	size;

	size = 0;
	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
