#include "main.h"
#include <stdio.h>

/**
 * print_reverse - prints a string in reverse
 * @r: the string to check
 * Return: return 1
 */

int print_reverse(va_list r)
{
	char *str;
	int i, j = 0;

	str = va_arg(r, char *);
	if (str == NULL)
		str = ")llun(";
	for (i = 0; str[i] != '\0'; i++)
		;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(str[i]);
		j++;
	}
	return (j);
}
