#include "main.h"
#include <stdio.h>

/**
 * main - entry point to the program
 *
 * Description: prints the number of arguments passed to it
 *
 * @argc: returns counts supplied to the program
 * @argv: pointer to array of arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv [])
{
	int m;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (m = 0; *argv; m++, argv++)
			;
		printf("%d\n", m - 1):
	}
	return (0);
}
