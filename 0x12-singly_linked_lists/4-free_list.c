#include "lists.h"

/**
 * free_list - functions thats free a linked list
 * @head: pointer to the first node in the linked list
 * Return: void no Return
 */

void	free_list(list_t *head)
{
	list_t	*curr;

	while (head)
	{
		curr = head->next;
		free(head->str);
		free(head);
		head = curr;
	}
}
