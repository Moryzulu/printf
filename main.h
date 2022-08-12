#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2);
int print_int(long n);
int print_unsi_int(unsigned int n);
int print_oct(unsigned int n);
int print_lowerhex(unsigned int n);
int print_upperhex(unsigned int n);
int print_binary(unsigned int n);
/**
 * struct conversion_specifiers - struct types
 * @sp: The data specifier
 * @f: The function pointer
 *
 * The struct for the idfferent specifiers of printf
*/
typedef struct conversion_specifiers
{
	char *sp;
	int (*f)(char *sp, va_list args);
} c_s;
int _print_char(char *sp, va_list args);
int _print_char_ptr(char *sp, va_list args);
int _print_number(char *sp, va_list args);
#endif
