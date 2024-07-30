#include "lists.h"

/**
 * dlistint_len - functions that returns number of nodes in double linked list
 * @h: pointer to head of linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
