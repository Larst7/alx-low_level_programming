#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely.
 * @h: Pointer to the pointer of the first node in the linked list.
 *
 * Return: Number of elements in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		node = (*h)->next;
		free(*h);
		*h = NULL;
		*h = node;
		len++;
	}

	return (len);
}
