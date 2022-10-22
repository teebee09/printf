#include "main.h"
#include <stdio.h>

/**
 * print_rot13 - fncs that encodes a string into rot13
 * @R: string to convert
 * Return: size the output text
 */

int print_rot13(va_list R)
{
	char *r;
	int j, i, count = 0;
	int k = 0;
	char input[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	r = va_arg(R, char *);
	if (r == NULL)
		r = "(null)";
	for (i = 0; r[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; input[j] != '\0'; j++)
		{
			if (r[i] == input[j])
			{
				_putchar(output[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(r[i]);
			count++;
		}
	}
	return (count);
}
