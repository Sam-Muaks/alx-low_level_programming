#include "main.h"
/**
 * *_strcpy - copies the string to destination
 *
 * @dest: destination of string copied
 *
 * @src: source of string copied
 *
 * Return: pointer to dest (destination)
 */
char *_strcpy(char *dest, char *src)
{
	int s = 0;

	while (*(src + s))
	{
		*(dest + s) = *(src + s);
		s++;
	}
	*(dest + s) = '\0';
	return (dest);
}
