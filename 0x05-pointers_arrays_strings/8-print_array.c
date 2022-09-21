#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @n: elements of array
 * @a: array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int s = 0;

	while (s < n)
	{
		printf("%d", a[s]);
		if (s < (n - 1))
			printf(", ");
		s++;
	}
	printf("\n");
}
