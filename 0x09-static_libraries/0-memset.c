#include "main.h"

/**
 * _memset - fills memory with constant byte n amount of times
 *
 * @s: pointer containing address of memory to fill
 * @b: constant byte to be written into memory
 * @n: number of times the byte will be written into memory
 *
 * Return: address of memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
