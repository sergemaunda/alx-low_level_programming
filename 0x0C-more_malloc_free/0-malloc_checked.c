#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: size of memory
 *
 * Return: pointer to the allocated memory.
 */


void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
	{
		exit(98);
	} else
	{
		return (malloc(b));
	}
}

