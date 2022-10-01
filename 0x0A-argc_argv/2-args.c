#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints all arguments it recieves, one argument per line
 *
 * @argc: returns integer count of arguments
 * @argv: pointer to array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
		printf("%s\n", argv[m]);

	return (0);
}
