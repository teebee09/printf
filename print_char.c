#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 * Return: return 1
 */

int print_char(va_list c)
{
	unsigned char my_char;

	my_char = va_arg(c, int);
	_putchar(my_char);
	return (1);
}

/**
 * print_modulus - fncs prints %
 * Return: return 1
 */

int print_modulus(void)
{
	_putchar('%');
	return (1);
}
