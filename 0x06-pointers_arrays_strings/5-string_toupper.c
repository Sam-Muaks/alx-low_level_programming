#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to be changed
 *
 * Return: address of string
 */
char *string_toupper(char *s)
{
	int m = 0;

	while (*(s + m)
	{
		if (*(s + m) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		m++;
	}
	return (s);
}
