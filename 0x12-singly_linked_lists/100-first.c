<<<<<<< HEAD
=======

>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
<<<<<<< HEAD
 *first- execute_before_main - Displays a message before the main function runs
=======
 * first - prints a sentence before the main
 * function is executed
>>>>>>> 40262e3c0c2687f43d32960ebe2a444042827d1c
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

