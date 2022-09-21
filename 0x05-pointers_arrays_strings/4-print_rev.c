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
	int index;
	/*finds length of the string*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*decrement from last index*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
}
