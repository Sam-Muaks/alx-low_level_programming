#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer value
 * @b: second integer value
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int *a;
	int *b;

	*a = 98;
	*b = 42;

	swap_int(&a, &b);
}
