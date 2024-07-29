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
	list_t *new_node = malloc(sizeof(list_t));

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

	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
