#include "main.h"

/**
 * print_hex - fncs that can print unsigned int in hexadecimal
 * @n: the unsigned integer to print
 * @c: case for printing, 0 for lower, 1 for higher
 * Descriptions: prints unsigned in hexadecimal with _putchar
 * Return: return size of output text
 */

int print_hex(unsigned int n, unsigned int c)
{
	unsigned int length, pow_ten, j, digit, num;
	int count = 0;
	char diff;

	if (n != 0)
	{
		num = n;
		length = 0;
		if (c)
			diff = 'A' - ':';
		else
			diff = 'a' - ':';

		while (num != 0)
		{
			num /= 16;
			length++;
		}
		pow_ten = 1;
		for (j = 1; j <= length - 1; j++)
			pow_ten *= 16;
		for (j = 1; j <= length; j++)
		{
			digit = n / pow_ten;
			if (digit < 10)
				_putchar(digit + '0');
			else
				_putchar(digit + '0' + diff);
			count++;
			n -= digit * pow_ten;
			pow_ten /= 16;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}


/**
 * print_x - takes an unsigned int and prints it in lowercase hex
 * @x: unsigned int to print
 * Descriptions: prints in lowercase hex with _putchar
 * Return: size of the output
 */

int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * print_X - takes an unsigned int and prints it in uppercase hex
 * @X: unsigned int X to print
 * Description: prints an uppercase hex with _putchar
 * Return: size of the output
 */

int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}





