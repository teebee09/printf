#include "main.h"

/**
 * print_decimal - fncs that can print a decimal
 * @d: the integer to print
 * Descriptions: prints digit with _putchar
 * Return: return size of output text
 */

int print_decimal(va_list d)
{
	int length, pow_ten, j, digit, n, count = 0, num;

	n = va_arg(d, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
		}
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		pow_ten = 1;
		for (j = 1; j <= length - 1; j++)
			pow_ten *= 10;
		for (j = 1; j <= length; j++)
		{
			digit = n / pow_ten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
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
