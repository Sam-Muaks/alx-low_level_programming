#include "main.h"
/**
 * main - Entry point
 *
 * Description:prints _putchar using print_alphabet prototype
 *
 * Return:Always 0 (Success)
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
putchar ('\n');
}
