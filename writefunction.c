#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On Success 1,
 * On error, -1 is returned, and errno is set appropriately.
 * Description: _putchar uses a local buffer of 1024 to call write
 * as little as possible
 */

int _putchar(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buff, 1);
		i = 0;
	}
	if (c != -1)
	{
		buff[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout
 * @s: pointer to the string to print
 * Return: number of chars written
 */

int _puts(char *s)
{
	register int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}



