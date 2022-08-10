#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _printf - recreates the printf function
 * @format: string with format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int j;
	int a = 0;
	va_list args;
	c_s conv_specifiers[] = {
		{"%", _print_int},
		{"d", _print_int},
		{"i", _print_int},
		{"u", _print_int},
		{"o", _print_int},
		{"x", _print_int},
		{"X", _print_int},
		{"c", _print_char},
		{"s", _print_char_ptr},
		{"p", _print_char_ptr},
		{"r", _print_char_ptr}
	};
	va_start(args, format);
	while (format != NULL && format[i])
	{
		if (format[i] != *conv_specifiers[0].specifier)
		{
			_putchar(format[i]);
		}
		else
		{
			for (j = 1; j < 12; j++)
			{
				if (format[i + 1] == *conv_specifiers[j].specifier)
				{
					format++;
					conv_specifiers[j].f(conv_specifiers[j].specifier, args);
				}
				if (format[i + 1] == *conv_specifiers[0].specifier)
				{
					_putchar('%');
					a = -1;
					break;
				}
			}
		}
		i++;
	}
	va_end(args);
	return (i + a);
}
