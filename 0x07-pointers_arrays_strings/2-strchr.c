#include "main.h"

/**
 * _strchr - returns a pointer to the first occurrence of character c
 * in the string s, or NULL if the character is not found
 *
 * @s: pointer to the string
 * @c: character
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	char *m = s;

	while (*m != 0 && *m != c)
	{
		m++;
	}
	if (*m != c)
	{
		return (0);
	}
	return (m);
}
