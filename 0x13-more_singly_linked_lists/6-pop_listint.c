#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer of the first node in the list.
 *
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;

	return (num);
}
