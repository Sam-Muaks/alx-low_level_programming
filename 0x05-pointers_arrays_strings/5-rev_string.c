#include "main.h"
/**
 * rev_string - function that reverses an existing string
 *
 * @s: string input
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int l, i;
	char ch;

	/*use for statement to find the string length without null char*/
	for (l = 0; s[l] != '\0'; l++)
		;

	/*loop to half the string to swap it*/
	for (i = 0; i< 1 / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - i - 1]; /*-1 because the array starts from 0*/
		s[l - i - 1] = ch;
	}
}
