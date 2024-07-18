#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc and checks
 * if allocation fails.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory, or causes normal
 * process termination with a status value of 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}
	return (ptr);
}
