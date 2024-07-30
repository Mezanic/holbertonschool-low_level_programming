#include "lists.h"

/**
 * add_node_end - adds new note at the end of a singled list
 * @head: pointer to the head of a linked list
 * @str: string
 *
 * Return: new node or NULL if it's failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node = malloc(sizeof(list_t));
	list_t *last;

	if (new_node == NULL)
		return (NULL);

	while (str[i])
		i++;

	new_node->str = strdup(str);
	new_node->len = i;

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	 last = *head;

	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);

}
