#include "lists.h"

/**
 * free_list - Function that free a list
 * @head: pointer to the head of linked list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;

		/* free the value inside str */
		free(tmp->str);

		/**
		 * free the value of the structure itself
		 * and the pointer for str
		 */

		free(tmp);
	}
}
