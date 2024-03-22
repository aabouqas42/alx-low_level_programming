#include "lists.h"

/**
 * _creat_node - function thats create a new node
 * @data: integer reper the data to be insert to the list
 * Return: pointer to the node we created
 */

dlistint_t	*_creat_node(int data)
{
	dlistint_t	*new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = data;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - function thats add a node at index
 * @h: pointer to the first node in the list
 * @idx: integer reper index we need to add the node
 * @n: reper the data of the node
 * Return: new node if it success NULL if it failed
 */

dlistint_t	*insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t		*node;
	dlistint_t		*new_node;
	unsigned int	i;

	i = 0;
	node = *h;
	new_node = _creat_node(n);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (node)
	{
		if (i == idx)
		{
			new_node->prev = node->prev;
			new_node->next = node;
			node->prev->next = new_node;
			return (new_node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
