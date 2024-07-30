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


	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
		last = last->next;

	new_node->next = NULL;
	new_node->prev = last;
	new_node->n = n;
	last->next = new_node;
	return (new_node);
}
