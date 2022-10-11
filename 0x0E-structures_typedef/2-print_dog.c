#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @struct dog: structure for dog's information
 * @d: pointer to dog variable
 *
 * Return: nothng (void)
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
