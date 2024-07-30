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
	unsigned len = dlistint_len(head);
	dlistint_t *curr = *head;

	if (idx < 1)
		return (NULL);

	if (idx == 1)
		return (add_dnodeint(h, n));
		
	if (idx == len)
		return (add_dnodeint_end(h, n));

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	for (i = 1; curr != NULL && i < idx - 1;i++)
	curr = curr->next;
	
	new_node->n = n;
	new_node->next = curr->next;
	new_node->prev = curr;
	curr->prev = new_node



}
