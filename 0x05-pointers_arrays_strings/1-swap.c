#include "main.h"

/**
 * swap_int - swap the values of two int a and b
 * @n: A Pointer to an int
 * @b: B Pointer to an int
 * Return: void- Correct
 */

void swap_int(int *a, int *b)
{
int f;
f = *a;
*a = *b;
*b = f;
}
