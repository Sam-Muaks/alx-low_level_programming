#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse using recursion
 *
 * @s: pointer to address of string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *rev;

	rev = s;
	if (*rev != 0)
	{
		_print_rev_recursion(rev + 1);
		putchar(*s);
	}
}
