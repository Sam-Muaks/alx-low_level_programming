#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints the name of the program
 *
 * @__attribute__: ignores unused attributes
 * @argc: number of arguments passed through the program
 * @argv: pointer to arrays of the arguments passed
 * Return: Always 0 (success)
 */
int __attribute__ ((unused)) void main(void argc, char *argv[])
{
printf("%s\n", argv[0]);
		return (0);
}
