#include "lists.h"

/**
 * creat_node - function thats create a new node
 * @data: integer reper the data to be insert to the list
 * Return: pointer to the node we created
 */

dlistint_t	*creat_node(int data)
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
 * add_dnodeint - function thats add a node to beggening of the list
 * @head: pointer to first node in the list
 * @n: inter that reper the data to be add to list
 * Return: pointer to the first node in the list
 */

dlistint_t	*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t	*node;
	dlistint_t	*new_node;

	node = (*head);
	if (*head == NULL)
	{
		*head = creat_node(n);
		return (*head);
	}
	new_node = creat_node(n);
	if (new_node == NULL)
		return (NULL);
	node->prev = new_node;
	new_node->next = node;
	(*head) = new_node;
	return (node);
}
