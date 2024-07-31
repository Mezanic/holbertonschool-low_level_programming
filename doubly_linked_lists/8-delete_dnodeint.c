#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index in a linke dlist
 * @head: pointer to head of the linked list
 * @index :index of the node that sould be deleted
 *
 * Return: 1 if succed or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);

	/* delete node at the beginning of a list */
	if (index == 0)
	{
		*head = (*head)->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}

	for (i = 0; curr != NULL && i < index; i++)
		curr = curr->next;

	if (curr == NULL)
		return (-1);

/* set up index - 1 for delete node at index position */

	if (curr->prev != NULL)
		curr->prev->next = curr->next;

/* set up index + 1 for delete node at index position */
	if (curr->next != NULL)
		curr->next->prev = curr->prev;

	free(curr);
	return (1);

}
