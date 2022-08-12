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
	int len = 0;
	int i = 0;
	int j;
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
		{"b", _print_number},
		{"r", _print_rev_str},
		{"R", _print_rot13}
	};
	va_start(args, format);
	if (format == NULL)
	{
		return (0);
	}
	while (format != NULL && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			len++;
		}
		else
		{
			for (j = 0; j < 11; j++)
			{
				if (format[i + 1] == *conv[j].sp)
				{
					format++;
					len = len + conv[j].f(conv[j].sp, args);
				}
			}
		}
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				format++;
				len++;
			}
			else
			{
				_putchar('%');
				len++;
				_putchar(format[i + 1]);
				format++;
				len++;
			}
		}
		i++;
	}
	va_end(args);
	return (len);
}
