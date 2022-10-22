#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: character to check
 * Return: return 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
