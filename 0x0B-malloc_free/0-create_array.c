#include "main.h"

/**
 * create_array - creates an array and stores in memory
 *
 * @c: char stored in memory
 * @size: size of the memory to print
 *
 * Return: s pointer to array, or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
