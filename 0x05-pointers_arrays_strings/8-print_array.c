#include <stdio.h>

/**
 * print_array: prints n elements of an array of int
 * @a: a pointer to an int
 * @n: return value n
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n);
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
