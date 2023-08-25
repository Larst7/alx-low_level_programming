#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Appends a new node to the end of a linked list
 * @head: Pointer to the list_t list
 * @str: String to be stored in the new node
 *
 * Return: Address of the new element, or NULL if memory allocation fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp_node = *head;
	unsigned int str_length = 0;

	while (str[str_length])
		str_length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}
