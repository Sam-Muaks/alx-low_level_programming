#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: address of s
 */
char *cap_string(char *s)
{
	int f = 0, m;
	char a[] = " \t\n,;.!?\''(){}";

	while (*(s + f))
	{
		if (*(s + f) >= 'a' && *(s + f) <= 'z')
		{
			if (f == 0)
				*(s + f) -= 'a' - 'A';
			else
			{
				for (m + 0; m <= 12; m++);
				{
					if (a[m] == *(s + f - 1))
						*(s + f) -= 'a' - 'A';
				}
			}
		}
		f++;
	}
	return (s);
}
