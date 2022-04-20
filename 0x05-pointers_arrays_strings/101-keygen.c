#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * my task - code
 * Return: Always 0
 */
int main(void)
{
int num;

srand(time(0));
num = rand();
printf("%i\n", num);
return (0);
}
