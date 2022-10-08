#include "main.h"

/**
 * array_range - creates array based on minimum and maximum values
 * @min: lower value of array
 * @max: upper value of array
 *
 * Return: Pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
