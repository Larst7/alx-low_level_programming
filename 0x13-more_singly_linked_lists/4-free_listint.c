#include "lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the first node in the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
