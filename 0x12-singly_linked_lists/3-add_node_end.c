#include "lists.h"

/**
 * craete_node - functoion thats create a new node
 * @str: pointer to char contais a string
 * Return: pointer to new node
 */

list_t	*craete_node(const char *str)
{
	list_t	*new_node;
	size_t	size;

	size = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	while (str && str[size])
		size++;
	if (str == NULL)
		new_node->str = strdup("");
	else
		new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->len = size;
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node_end - functoion thats add a node to the end of the list
 * @head: pointer to the first node in the list
 * @str: pointer to char "string"
 * Return: node thats we added to the list
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	list_t	*node;
	list_t	*new_node;

	node = *head;
	new_node = craete_node(str);
	if (new_node == NULL)
		return (NULL);
	if (node == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (node->next)
		node = node->next;
	node->next = new_node;
	return (new_node);
}
