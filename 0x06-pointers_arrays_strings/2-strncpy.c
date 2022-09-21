#include "main.h"
/**
 * _strncpy - copies string from src to dest
 *
 * @dest: src is copied to
 * @src: string being copied
 * @n: number of bytes to copy
 *
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	k = 0;
	while (k < n && *(src + k))
	{
		*(dest + k) = *(src + k);
		k++;
	}
	while (k < n)
	{
		*(dest + k) = '\0';
		k++;
	}
	return (dest);
}
