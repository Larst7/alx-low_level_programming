#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets head to NULL.
 * @head: Pointer to the pointer of the first node in the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
