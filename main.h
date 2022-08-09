#ifndef HEADER_H
#define HEADER_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2);
void print_number(int n);
/**
 * struct conversion_specifiers - struct types
 * @specifier: The data specifier
 * @f: The function pointer
 *
 * The struct for the idfferent specifiers of printf
*/
typedef struct conversion_specifiers
{
	char *specifier;
	void (*f)(char *specifier, va_list args);
} c_s;
void _print_char(char *specifier, va_list args);
void _print_char_ptr(char *specifier, va_list args);
void _print_int(char *specifier, va_list args);
#endif
