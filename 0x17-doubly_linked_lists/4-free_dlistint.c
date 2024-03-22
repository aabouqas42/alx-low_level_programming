#include "lists.h"

/**
 * free_dlistint - function thats free a list
 * @head: pointer to the first node in the list
 * Return: void
 */

void	free_dlistint(dlistint_t *head)
{
	dlistint_t	*curr;

	while (head)
	{
		curr = head->next;
		free(head);
		head = curr;
	}
}
