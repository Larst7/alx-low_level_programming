#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 *  print_list - Prints all the elements of a linked list
 *  @h: Pointer to the list_t list to print
 *
 *  Return: The number of nodes printed
=======
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of nodes printed
>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
<<<<<<< HEAD
		 nodes_printed++;
	}

	return (nodes_printed);

=======
		nodes_printed++;
	}


	return (nodes_printed);
>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
}
