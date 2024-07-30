#include "lists.h"

/**
 * sum_dlistint - function that return sum of all date in a linked list
 * @head: poitner to the head of the double linked list
 *
 * Return: sum of all data or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{

		sum += head->n;
		head = head->next;

	}

	return (sum);
}
