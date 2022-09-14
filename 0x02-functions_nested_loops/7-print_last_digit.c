#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *@n: the number from which we will take and return its last digit
 *
 * putchar - writes the character to stdout
 *
 * Return:Value of last digit
 */
int print_last_digit(int n)
{
int putchar(int)

int r;

r = (n % 10);

if (r < 0)
{
	r = (-1 * r);
}
putchar(r + '0');
return (r);
}
