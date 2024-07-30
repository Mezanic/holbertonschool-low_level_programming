#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a linked list
 * @head: pointer to the head of linked list
 * @n: integer
 *
 * Return: new node or NULl if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/* set up the new beginnign of list */
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
