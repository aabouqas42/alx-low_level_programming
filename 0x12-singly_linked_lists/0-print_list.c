#include "lists.h"

/**
 * print_list - functoion thats print the content of the list
 * @h: pointer to the first node in the linked list
 * Return: size of the list
 */

size_t	print_list(const list_t *h)
{
	size_t	size;

	size = 0;
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
