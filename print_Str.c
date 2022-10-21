#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_Str - prints a string
 * @S: address to the string
 *
 * Return: an integer
 */

int print_Str(va_list S)
{
	char *string = va_arg(S, char *);
	int i = 0;

	if (!string)
		string = "(null)";
	for (; string[i]; i++)
		_putchar(string[i]);
	return (i);
}
