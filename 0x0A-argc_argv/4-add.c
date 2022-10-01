#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point of the program
 *
 * Description: this program adds positive numbers
 *
 * @argc: returns number of arguments in the program
 * @argv: pointer to array of arguments
 *
 * Return: 1 if error, else 0 (success)
 */
int main(int argc, char *argv[])
{
	int m, s, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (m = 1; m < argc; m++)
		{
			ptr = argv[m];
			length = strlen(ptr);

			for (s = 0; s < length; s++)
			{
				if (isdigit(*(ptr + s)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[m]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
