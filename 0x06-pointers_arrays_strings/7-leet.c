#include "main.h"
/**
 * leet - encodes string into 1337
 * @s: string beeing encoded
 *
 * Return: address of string
 */
char *leet(char *s)
{
	int f, m;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (f = 0; *(s + f); f++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (a[m] == *(s + f))
				*(s + f) = b[m];
		}
	}
	return (s);
}
