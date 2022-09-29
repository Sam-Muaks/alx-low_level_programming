#include "main.h"

/**
 * _puts_recursion - prints a string, adding a newline using recursion
 *
 * @s: pointer to address of string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar(10);
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
