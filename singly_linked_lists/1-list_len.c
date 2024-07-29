#include "lists.h"

/**
 * list_len - Returns the number element in a linked list
 * @h: Pointer to header of linked list.
 *
 * Return: number of element in linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
