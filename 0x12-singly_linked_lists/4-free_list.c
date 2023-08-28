#include <stdlib.h>
#include "lists.h"

<<<<<<< HEAD
=======

>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
/**
 * free_list - Deallocates a linked list and its content
 * @head: Pointer to the list_t list to be deallocated
 */
<<<<<<< HEAD
=======


>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
void free_list(list_t *head)
{
	list_t *current_node;

<<<<<<< HEAD
=======

>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
	while (head)
	{
		current_node = head->next;
		free(head->str);
		free(head);
		head = current_node;
	}
}
<<<<<<< HEAD
=======


>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
