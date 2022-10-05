#include "main.h"

/**
 * str_concat - space in memory containing contents of s1 and s2
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to new space in memory of s1 and s2, else NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *cat;

	if (s1)
	{
		while (s1[len1])
			++len1;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		while (s2[len2])
			++len2;
	}
	else
	{
		s2 = "";
	}

	cat = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (!cat)
		return (NULL);
	if (s1)
	{
		for (len1 = 0; s1[len1]; ++len1)
			cat[len1] = s1[len1];
	}
	if (s2)
	{
		for (len2 = 0; s2[len2]; ++len2)
			cat[len1 + len2] = s2[len2];
	}
	cat[len1 + len2] = '\0';
	return (cat);
}
