#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new nodes at a given position
 * @h: pointer to the head of the list
 * @idx: index for the position of the new node
 * @n: number
 *
 * Return: new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *curr = *h;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	/* insert new node at the beginning of the list*/
	if (idx == 0)
		return (add_dnodeint(h, n));

	/* insert it everywere except beginning or end */
	for (i = 0; curr != NULL && i < idx - 1; i++)
		curr = curr->next;

	if (curr == NULL)
		return (NULL);

	/* insert new node at the end of the list */
	if (curr->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = curr->next;
	new_node->prev = curr;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	curr->next = new_node;

	return (new_node);

}
