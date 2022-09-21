#include "main.h"
/**
 * _strncat - apends src to dest
 *
 * @dest: string appended to
 * @src: string appended from
 * @n: number of bytes to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int m, s;

	m = s = 0;
	while (*(dest + m))
		m++;
	while (s < n && *(src + s))
	{
		*(dest +m) = *(src + s);
		m++;
		s++;
	}
	if (s < n)
		*(dest + m) = *(src + s);
	return (dest);
}
