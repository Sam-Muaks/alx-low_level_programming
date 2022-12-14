#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to chessboard matrix
 *
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int m, s;

	for (m = 0; a[m][7]; m++)
	{
		for (s = 0; s < 8; s++)
		{
			_putchar(a[m][s]);
		}
		putchar('\n');
	}
}
