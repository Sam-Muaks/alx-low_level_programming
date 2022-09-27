#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 *
 * @a: pointer containing address of the beginning of matrix
 * @size: size of the square matrix
 *
 * Return: Always 0, NULL
 */
void print_diagsums(int *a, int size)
{
	int m, s;
	int d1 = 0, d2 = 0;

	for (m = 0; m < size * size; m = m + (size + 1))
	{
		d1 = d1 + a[m];
	}
	for (s = size - 1; s < size * size - 1; s = s + (size - 1))
	{
		d2 = d2 + a[s];
	}
	printf("%d, %d\n", d1, d2);
}
