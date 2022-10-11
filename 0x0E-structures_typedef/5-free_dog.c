#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: dog to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	dog_t *fdog = d;

	if (d != 0)
	{
		free(fdog->name);
		free(fdog->age);
		free(fdog->owner);
		free(fdog);
	}
}
