#include "main.h"

/**
 * malloc_checked - allocates dynamic memory using malloc
 * @b: space to be allocated in bytes
 *
 * Return: pointer to allocated memory, else cause normal process
 * termination and return a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b)

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
