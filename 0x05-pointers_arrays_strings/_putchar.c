#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to be printed
 *
 * Return: On Success 1.
 * On error. -1 is returned and error returned
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
