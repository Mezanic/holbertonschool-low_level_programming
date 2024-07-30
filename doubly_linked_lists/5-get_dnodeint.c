#include "lists.h"

/**
 * get_dnodeint_at_index - functions that return nth node of a list
 * @head: head of the double linked list
 * @index: index of the node
 *
 * Return: nth node of a list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *find_nodes = head;
	unsigned int count = 0;

	while (find_nodes != NULL)
	{
		if (count == index)
			return (find_nodes);

		count++;
		find_nodes = find_nodes->next;

	}
	return (NULL);
}
