#include "lists.h"

/**
 * get_dnodeint_at_index - function thats return a node in a index
 * @head: pointer to the first node in the list
 * @index: integer reper the index of the node to be return
 * Return: a node at index
 */

dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int	i;

	i = 0;
	if (head == NULL)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
