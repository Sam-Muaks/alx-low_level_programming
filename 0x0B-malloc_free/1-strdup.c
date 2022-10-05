#include "main.h"

/*
 * strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: string being duplicated
 *
 * Return: pointer to duplicated string, null if insufficient memory
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		dup = malloc(sizeof(char) * size);
		if (dup)
		{
			while (size--)
				dup[size] = str[size];

			return (dup);
		}
	}
	return (NULL);
}
