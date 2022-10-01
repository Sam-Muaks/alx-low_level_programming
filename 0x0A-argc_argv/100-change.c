#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * coinConverter - function that helps do all the mathematics
 *
 * @i: variables to be useed for calculations
 *
 * Return: minimum number of coins needed
 */
int coinConverter(int i)
{
	int count = 0;

	while (i != 0)
	{
		if (i % 10 == 9 || i % 10 == 7)
			i = i - 2;
		else if (i % 25 == 0)
			i = i - 25;
		else if (i % 10 == 0)
			i = i - 10;
		else if (i % 5 == 0)
			i = i - 5;
		else if (i % 2 == 0)
		{
			if (i % 10 == 6)
				i = i - 1;
			else
				i = i - 2;
		}
		else
			i = i - 1;

		count++;
	}
	return (count);
}

/**
 * main - takes one argument for minimum coin count
 *
 * @argc: number of arguments in command line
 * @argv: pointer to array of arguments
 *
 * Return: 0 if 1 argument is passed, else return 1
 */
int main(int argc, char *argv[])
{
	int i, coin;

	coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);

	if (i < 0)
		printf("0\n");
	else
	{
		coin = coinConverter(i);


		printf("%d\n", coin);
	}
	return (0);
}
