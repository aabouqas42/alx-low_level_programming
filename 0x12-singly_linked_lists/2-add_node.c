#include "lists.h"

/**
 * craete_node - functoion thats create a new node
 * @str: pointer to char contais a string
 * Return: pointer to new node
 */

list_t	*creat_node(const char *str)
{
	list_t	*new_node;
	int		size;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	size = 0;
	while (str[size])
		size++;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->len = size;
	new_node->next = NULL;
	return (new_node);
}

/**
 * add_node - functoion thats add a node to begging of the list
 * @head: pointer to the first node of the list
 * @str: pointer to char "string"
 * Return: node thats we added to the list
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*node;
	list_t	*new_node;

	node = *head;
	new_node = creat_node(str);
	if (new_node == NULL)
		return (NULL);
	if (node == NULL)
	{
		(*head) = new_node;
		return (*head);
	}
	new_node->next = node;
	*head = new_node;
	return (new_node);
}
