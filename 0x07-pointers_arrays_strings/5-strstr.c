#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the string haystack
 *
 * @haysack: pointer to the string beeing evaluated
 * @needle: pointer to the string used to evaluate haysack
 *
 * Return: pointer to the beginning of the located substring, or NULL if the string is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int a;
	int compare = 0;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (haystack[i] != 0)
	{
		j = 0;
		a = i;
		while (needle[j] != 0)
		{
			if (needle[j] == haystack[a])
			{
				compare = 1;
			}
			else
			{
				compare = 0;
				break;
			}
			j++;
			a++;
		}
		if (compare == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (0);
}
