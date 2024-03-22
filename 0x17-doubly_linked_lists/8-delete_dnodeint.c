#include "lists.h"

/**
 * free_at_index_zero - function thats delete a node in index zero
 * @head: pointer to the first node in the list
 * Return: 1 if success -1 if it failed
*/

int	free_at_index_zero(dlistint_t **head)
{
	dlistint_t	*node;

	node = *head;
	if (node == NULL)
		return (-1);
	if (dlistint_len(node) == 1)
	{
		free (node);
		(*head) = NULL;
		return (1);
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	free (node);
	return (1);
}

/**
 * delete_dnodeint_at_index - function thats delete a node at an index
 * @head: a pointer to the first node at the list
 * @index: an integer thats repersent the index of the node we about to delete
 * Return: 1 if success -1 if it failed
 */

int	delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t		*node;
	dlistint_t		*curr;
	unsigned int	i;

	i = 0;
	node = *head;
	if (node == NULL)
		return (-1);
	if (index == 0)
		return (free_at_index_zero(head));
	while (node->next)
	{
		if (i == index - 1)
		{
			curr = node->next;
			node->next = node->next->next;
			node->next->prev = curr->prev;
			free (curr);
			return (1);
		}
		i++;
		node = node->next;
	}
	return (-1);
}
