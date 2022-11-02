#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: string containing the binary number
 *Return: Return the converted number, or 0 if the string has a char other than
 *0 or 1 or if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		n <<= 1;
		if (*b == '1')
			n += 1;
		else if (*b != '0')
			return (0);
		++b;
	}
	return (n);
}
