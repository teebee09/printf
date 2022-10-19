#include "main.h"

/**
 * print_octal - fncs that can print a octal
 * @o: the unsigned integer to print
 * Descriptions: prints digit with _putchar
 * Return: return size of output text
 */

int print_octal(va_list o)
{
	unsigned int length, pow_ten, j, digit, n, num;
	int count = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 8;
			length++;
		}
		pow_ten = 1;
		for (j = 1; j <= length - 1; j++)
			pow_ten *= 8;
		for (j = 1; j <= length; j++)
		{
			digit = n / pow_ten;
			_putchar(digit + '0');
			count++;
			n -= digit * pow_ten;
			pow_ten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
