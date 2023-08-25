#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a linked list
 * @head: Pointer to the list_t list
 * @str: New string to be added as the node's content
 *
 * Return: The address of the new element, or NULL if memory allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_length = 0;


	while (str[str_length])
		str_length++;


	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);


	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = (*head);
	(*head) = new_node;


	return (*head);
}
