#include "lists.h"

/**
 * add_nodeint_end - adds a  Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer of the first node in the list.
 * @n: The integer data to insert into the new node.
 *
 * Return: Address of the new node, or NULL if memory allocation fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *lasi = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (lasi->next)
		lasi = lasi->next;

	lasi->next = newNode;

	return (newNode);
}
