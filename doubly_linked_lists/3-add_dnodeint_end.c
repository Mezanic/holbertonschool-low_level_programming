#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of double linked list
 * @head: pointer to the head of the double linked list
 * @n: integer
 *
 * Return: new node or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (new_node == NULL)
		return (NULL);

/* set up new_node with value n and for became end of the list */
	new_node->next = NULL;
	new_node->n = n;

	/**
	 * check if the list is empty and
	 * make new_node head
	 */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	new_node->prev = last;
	return (new_node);
}
