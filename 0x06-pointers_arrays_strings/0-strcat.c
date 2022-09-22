#include "main.h"
/**
 * _strcat - concatenates two strings appending src to dest string
 *
 * @dest: string being written to
 * @src: string being written from
 *
 * Return: destination string
 */

char *_strcat(char *dest, char *src)
{
	int m, s;

	m = s = 0;
	while (*(dest + m))
		m++;
	while ((*(dest + m) = *(src + s)))
	{
		m++;
		s++;
	}
	return (dest);
}
