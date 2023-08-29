#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *larst, *sammy;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	larst = head->next;
	sammy = (head->next)->next;

	while (sammy)
	{
		if (larst == sammy)
		{
			larst = head;
			while (larst != sammy)
			{
				nodes++;
				larst = larst->next;
			}

			return (nodes);
		}

		larst = larst->next;
		sammy = (sammy->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Safely prints a listint_t list.
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, index = 0;

	count = looped_listint_len(head);

	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
