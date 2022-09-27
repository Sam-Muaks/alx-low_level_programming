#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 *
 * @s: pointer that points to a pointer
 * @to: pointer that points to a character
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
