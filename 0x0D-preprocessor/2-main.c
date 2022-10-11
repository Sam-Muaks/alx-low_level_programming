#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Description: prints the name of the file it was compiled from
 *
 * Return: 0
 */
int main(void)
{
	printf("%s\n", _FILe_);

	return (0);
}
