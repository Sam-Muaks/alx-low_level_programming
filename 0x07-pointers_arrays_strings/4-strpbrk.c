#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s of any of the bytes
 * in the string accept
 *
 * @s: pointer to string beeing searched
 * @accept: pointer that contains the string beeing used to evaluate s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such
 * byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s != 0)
	{
		m = 0;
		for (accept[m] != 0; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);

}
