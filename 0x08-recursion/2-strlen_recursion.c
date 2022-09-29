#insert "main.h"

/*
 * _strlen_recursion - returns length of string using recursion
 * @s: pointer to the addres of string
 *
 * Return: string length, else return 0
 */
int _strlen_recursion(char *s)
{
	int m = 0;

	if (*s != 0)
	{
		i = _strlen_recursion(s + 1);
		return (i++);
	}
	return (i);
}
