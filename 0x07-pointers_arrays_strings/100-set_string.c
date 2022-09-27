#include "main.h"

/**
 * set_string - sets the value of a pointer to a character
 *
 * @s: pointer that p[oints to a pointer
 * @to: pointer beeing pointed too
 *
 * Return: value of to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
