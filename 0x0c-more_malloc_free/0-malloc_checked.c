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
	void *p = malloc(b);

	if (p)
		return (p);
	exit(98);
}
