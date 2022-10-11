#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @struct dog: structure containing dog's information
 * @d: pointer to dog variable
 *
 * Return: nothng (void)
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		if (d->name == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: ");
		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
