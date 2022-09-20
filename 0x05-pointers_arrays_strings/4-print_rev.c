#include "main.h"
/**
 * print_rev - function that prints in reerse
 *
 * @s: string to input print
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0;
		while (*s(s+i))
			i++;
		i = i - 1;
		while (i>=0)
		{
			_putchar(*(s + i));
			i--;
		}
		_putchar('\n');
}
