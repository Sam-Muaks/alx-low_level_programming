#include "main.h"
#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Description: this program multiplies two numbers
 *
 * @argc: returns number of arguments
 * @argv: pointer to array of arguments
 *
 * Return: 1 (error), else return always 0 (success)
 */
int main(int argc, char *argv[])
{
	int m, s;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		s = 1;
		for (m = 1; m < 3; m++)
			s *= atoi(argv[m]);
		printf("%d\n", s);
	}
	return (0);
}
