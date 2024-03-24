#include "lists.h"

/**
 * list_len - functoion thats return the size of linked list
 * @h: pointer to the first node in the list
 * Return: size of the list
 */

size_t	list_len(const list_t *h)
{
	size_t	size;

	size = 0;
	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
