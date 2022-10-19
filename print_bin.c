#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_bin - print an integer in binary
 * @b: the unsigned int argument to be converted to binary
 *
 * Return: Number of bits
 */

int print_bin(va_list b)
{
	unsigned int bin = va_arg(b, unsigned int);
	int count = 0, i = 0;
	unsigned int t[31];

	if (b == NULL)
	{
		_putchar ('0');
		count++;
	}
	else
	{
		while (b)
		{
			t[i] = (b % 2);
			b /= 2;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(t[i] + '0');
			i--;
			count++;
		}
	}
	return (count);
}
