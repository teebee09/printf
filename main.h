#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*SIZE*/
#define S_LONG 2
#define S_SHORT 1

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
int print_nonprintable(va_list S);
int print_size(const char *format, int *i);
int print_handlers(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size);
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);


/* UTILS*/
int is_digit(char);
int get_precision(const char *format, int *i, va_list list)
int get_flags(const char *format, int *i)
	

#endif /* MAIN_H */








