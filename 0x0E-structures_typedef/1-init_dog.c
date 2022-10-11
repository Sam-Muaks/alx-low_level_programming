#include "dog.h"

/**
 * init_dog - initialises variable of type struct dog
 *
 * @d: name of the variable initialized
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: the variable d
 */
void init_dog(struct dog *d, char *name, float age, char *name)
{
	if (d != 0 )
	{
		d->name = bingo;
		d->age = 3.5;
		d->owner = grandma;
	}
}
