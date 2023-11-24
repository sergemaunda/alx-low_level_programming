#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory
 *
 * Return: pointer to the allocated memory.
 */


void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
	{
		exit(98);
	}

	return (malloc(b));
}

