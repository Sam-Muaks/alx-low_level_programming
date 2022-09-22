#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to be changed
 *
 * Return: address of string
 */
char *string_toupper(char *)
{
	int m = 0;
	char str[] = "mohri_is_a_legend\n";
	char s;

	while (str[m])
	{
		*(s = str[m]);
		putchar(*(string_toupper(s)));
		m++;
	}
	return (s);
}
