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
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
