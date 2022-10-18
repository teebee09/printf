#include <unistd.h>

/**
 * _putchar - fncs that prints a the character of a string
 * @c: the character to print/check
 * Return: return 1 on Success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
