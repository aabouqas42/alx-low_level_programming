#include "lists.h"

/**
 * add_dnodeint_end - function thats add a node to the end of the list
 * @head: pointer to the first node in the list
 * @n: integer reper the data of the node
 * Return: pointer to the first node in the list
 */

dlistint_t	*add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t	*new_node;
	dlistint_t	*node;

	node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	while (node->next)
		node = node->next;
	new_node->n = n;
	new_node->prev = node;
	new_node->next = NULL;
	node->next = new_node;
	return (*head);
}
