#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if letter, always 0 (Success)
 */
int _isalpha(int c)
{
	int i = isalpha(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
