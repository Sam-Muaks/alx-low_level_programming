#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to be reversed
 * @n: length of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n);
{
	int m = 0, s;

	n = n - 1;
	while (m < n)
	{
		s = *(a + m);
		*(a + m) = *(a + n);
		*(a + n) = s;
		m++;
		n--;
	}
}
