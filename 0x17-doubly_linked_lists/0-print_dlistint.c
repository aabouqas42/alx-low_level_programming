#include "lists.h"

/**
 * print_dlistint - function thats print the data of the list
 * @h: pointer to the first node in the list
 * Return: size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t	size;

	size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
