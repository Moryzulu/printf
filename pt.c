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
	c_s conv[] = {
		{"d", _print_number},
		{"i", _print_number},
		{"u", _print_number},
		{"o", _print_number},
		{"x", _print_number},
		{"X", _print_number},
		{"c", _print_char},
		{"s", _print_char_ptr},
		{"p", _print_char_ptr},
		{"r", _print_char_ptr}
	};
	va_start(args, format);
	while (format != NULL && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			for (j = 0; j < 10; j++)
			{
				if (format[i + 1] == *conv[j].sp)
				{
					format++;
					conv[j].f(conv[j].sp, args);
				}
				if (format[i + 1] == '%')
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
