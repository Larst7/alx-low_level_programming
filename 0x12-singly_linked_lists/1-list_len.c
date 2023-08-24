#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Counts the total elements in a linked list
 * @h: A pointer to the list_t list
 *
 * Return: The count of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}

