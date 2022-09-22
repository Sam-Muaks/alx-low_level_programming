#include "main.h"
/**
 * print_number - takes a number and prints it out as integer
 * @n: integer that will be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
	}
	if (n == 0)
		putchar('0');
	if (n/10)
		putchar(n%10 + '0');
}
