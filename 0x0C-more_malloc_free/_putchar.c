<<<<<<< HEAD
#include <unistd.h>

=======
#include "main.h"
#include <unistd.h>
>>>>>>> 902a0195a7dba1f42da5091d3b9eeed0c6f021c6
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
