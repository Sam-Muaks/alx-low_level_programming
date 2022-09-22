#include "main.h"
/**
 * print_number - takes a number and prints it out as integer
 * @n: integer that will be printed
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int size = n;

	int digits = 0;

	int m;

	if (n < 0)
		size = -n;
	if (n == 0)
		digits = 1;

	while (size >= 1)
	{
		size = size / 10;
		digits++;
	}

	for (m = 0; m < digits; m++)
	{

		int pow = 1;

		int s;

		int y;

		for (s = 0; s < digits - m - 1; s++)
		{

			y = ((n / pow) % 10);
			if (n < 0)
			{
				y = -y;
				if (m == 0)
					_putchar(45);
			}
			_putchar(48 + y);
		}
	}
}
