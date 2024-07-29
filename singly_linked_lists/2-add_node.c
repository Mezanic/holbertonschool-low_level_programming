#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * of a linked list
 * @head: pointer to the head of linked list
 * @str: string
 *
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node;

	while (str[i])
		i++;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);

	if (!new_node)
		return (NULL);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
