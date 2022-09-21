#include "main.h"
/**
 * puts_half - prints second half of string
 *
 * @str: string parameters
 *
 * Return: void
 */
void puts_half(char *str)
{
	int m, s = 0;

	while (*(str + s))
		s++;
	m = s / 2;
	if (s % 2)
		m += 1;
	while (m < s)
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
