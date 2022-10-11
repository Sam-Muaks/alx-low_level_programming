#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: pointer to memory to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{

	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
