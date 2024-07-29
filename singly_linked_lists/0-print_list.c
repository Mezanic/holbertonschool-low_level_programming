#include "lists.h"

/**
 * print_list - prints alle lement of list_t
 * @h: pointer ton header file in linked list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

	h = h->next;
	}
	i++;
	return (i);
}
