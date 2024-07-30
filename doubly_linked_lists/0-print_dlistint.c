#include "lists.h"

/**
 * print_dlistint - print all element of double linked list
 * @h: pointer to the head of the double linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes_count = 0;

	while (h != NULL)
	{

		printf("%i\n", h->n);
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
