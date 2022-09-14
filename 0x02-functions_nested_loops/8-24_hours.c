#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 * h = hour, m = minutes
 * / 10 allows second digit to rotate
 *
 * Return: 24 hour clock one line after the other
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}
