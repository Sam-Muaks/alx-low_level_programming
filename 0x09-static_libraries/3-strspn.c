#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 * @s: pointer to string
 * @accept: pointer containing substring that will condition s
 *
 * Return: address string s points to
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
		c = 0;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			break;
		}
	}
	return (a);
}
