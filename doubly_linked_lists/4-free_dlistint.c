#include "lists.h"

/**
 * free_dlistint - functions thats free double linked list
 * @head: pointer to head of the list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
