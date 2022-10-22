#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_nonprintable - prints a string with non printable characters
 * @S: address to the non printable string
 *
 * Return: an integer
 */

int print_nonprintable(va_list S)
{
	char *string = va_arg(S, char *);
	int i = 0;

	if (!string)
		string = "(null)";
	for (; string[i]; i++)
		_putchar(string[i]);

	return (i);
}
