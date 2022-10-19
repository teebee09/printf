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
	unsigned int size, bin, i, j, n, num;
	int count = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		size = 0;
		while (num != 0)
		{
			num /= 2;
			size++;
		}
		bin = 1;
		for (j = 1; j <= size - 1; j++)
			bin *= 2;
		for (j = 1; j <= size; j++)
		{
			i = n / bin;
			_putchar(i + '0');
			count++;
			n -= i * bin;
			bin /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
