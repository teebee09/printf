#include "main.h"

/**
 * _puts - prints a string
 * new line, to stdout.
 * @str: input string
 * Return: count of string.
 */
int _puts(char *str)
{
	int i = 0; /* count */

	while (*str)
	{
		_putchar(*str);
		str++;
		i++;
	}
	return (i);
}
