#include "main.h"
/**
 * _puts - prints a print
 * @str: A pointer to int
 *
 * Return: void - Correct
 */

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar ('\n');
}
