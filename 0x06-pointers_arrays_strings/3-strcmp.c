#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string being compared
 * @s2: second string being compared
 * Return: difference between s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int l = 0;

	while (*(s1 + l) && *(s2 + l) && (*(s1 + l) == *(s2 + l)))
		l++;
	return (*(s1 + l) - *(s2 + l));
}
