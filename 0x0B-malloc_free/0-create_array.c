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
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *s=(char*)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
