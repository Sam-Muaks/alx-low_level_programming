#include "main.h"

/**
 * alloc_grid - returns a pointer to 2 dimensional array of integers
 *
 * @width: parameter that defines the width
 * @height: parameter that defines the height
 *
 * Return: NULL if negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr = NULL;

	if (width <= 0 || height <=0)
		return (NULL);

	ptr = (int *)malloc(width * height * sizeof(int));

	for (i = 0; i < width * height; i++)
		;

	Return (ptr);
}
