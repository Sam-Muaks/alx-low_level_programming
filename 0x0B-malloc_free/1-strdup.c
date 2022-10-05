#include "main.h"

/*
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 *
 * @str: string being duplicated
 *
 * Return: pointer to duplicated string, null if insufficient memory
 */
char *_strdup(char *str)
{
	int i = 0, j, k = 0;
	char *dupStr = NULL;

	while (str[k] != '\0')
	{
		i++;
		k++;
	}

	dupStr = malloc(sizeof(char) * (i + 1));

	if (str == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dupStr[j] = str[j];

	return (newStr);
}
