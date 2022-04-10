#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success/correct)
 */
int main(void)
{
int firstD, secondD, thirdD;

for (firstD = 0; firstD < 8; firstD++)
{
for (secondD = firstD + 1; secondD < 9; secondD++)
{
for (thirdD = secondD +1; thirdD < 10; thirdD++)
{
putchar((firstD % 10) + '0');
putchar((secondD % 10) + '0');
putchar((thirdD % 10) + '0');

if(firstD == 7 && secondD == 8 && thirdD == 9)
continue;

putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);

}
