#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: character to check
 * Return: return 0
 */

int _putchar(char c)
{
	static int i;
	static char buffer[1024];

	if (c == -1)
	{
		i = 0;
		return (0);
	}
	if (c == -2 || i == 1024)
	{
		write(1, buffer, i);
		i = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[i] = c;
		i++;
		return (1);
	}
	return (0);
}
