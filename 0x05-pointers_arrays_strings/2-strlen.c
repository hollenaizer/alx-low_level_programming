#include "main.h"
/**
 * _strlen - len of a string
 * @s: A pointer to an int
 *
 * Return: void Correct
 */

int _strlen(char *s)
{
int u;
u = 0;

while (s[u] != '\0')
{
u++;
}
return (u);
}
