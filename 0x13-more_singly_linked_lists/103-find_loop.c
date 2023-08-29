#include "lists.h"

/**
 * find_listint_loop - Finds the start of a loop in a linked list.
 * @head: Pointer to the first node in the list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *larst = head, *sammy = head;

	while (larst && sammy && sammy->next)
	{
		larst = larst->next;
		sammy = (sammy->next)->next;

		if (larst == sammy)
			break;
	}

	if (larst != sammy)
		return (NULL);

	larst = head;

	while (larst != sammy)
	{
		larst = larst->next;
		sammy = sammy->next;
	}

	return (larst);
}
