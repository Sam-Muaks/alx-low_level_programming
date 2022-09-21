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
	/*declaring variables*/
	int i, len, temp;
	len = strlen(str1); /*use strlen() to get length of str string*/

	/*for loop is used to iterate the string*/
	for (i = 0; i < len/2; i++)
	{
		/*temp variable is used to temporarily hold the string*/
		temp = str1[i];
		str1[i] = str1[len - i - 1];
		str1[len -i -1] = temp;
	}
	{
		char str[10]; /*size of character string*/

		rev_string(*s);
	}
}
