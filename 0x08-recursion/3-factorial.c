#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number of which factorial is computed
 *
 * Return: -1 error, else return 1
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
