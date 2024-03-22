#include "lists.h"

/**
 * sum_dlistint - function sum the data in the list
 * @head: pointer to the first node in the list
 * Return: sum of data in the list
 */

int	sum_dlistint(dlistint_t *head)
{
	int	total;

	total = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
