#include "main.h"
/**
 * _islower - function that checks if character is lowercase
 * @c: single letter input
 *
 * putchar - function that returns the character written on the stdout
 *
 * Return: 1 if lowercase, otherwise always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
