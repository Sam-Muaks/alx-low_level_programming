#include "main.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
