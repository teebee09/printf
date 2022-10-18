#include "main.h"

/**
 * print_unsigned - fncs that can print an unsigned int
 * @u: the unsigned integer to print
 * Descriptions: prints digit with _putchar
 * Return: return size of output text
 */

int print_unsigned(va_list u)
{
	unsigned int length, pow_ten, j, digit, n, num;
	int count = 0;

	n = va_arg(u, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		pow_ten = 1;
		for (j = 1; j <= len - 1; j++)
			pow_ten *= 10;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow_ten;
			_putchar(digit + '0');
			count++;
			n -= digit * pow_ten;
			pow_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
