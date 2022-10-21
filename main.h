#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct codeformat - structure format
 * @sc: the location and methods that translate data
 * @f: prints function for specific types
 * Return: return int
 */
typedef struct  codeformat
{
	char *sc;
	int (*f)(va_list);
} codef;

int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_decimal(va_list d);
int print_int(va_list i);
int print_unsigned(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_reverse(va_list r);
int print_rot13(va_list R);
int print_bin(va_list b);


#endif /* MAIN_H */
