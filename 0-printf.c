#include <stdlib.h>
#include <stdio.h>
#include "main6.h"
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
		{"r", _print_char_ptr},

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
					a = - 1;
					break;
				}
			}
		}
		i++;
	}
	va_end(args);
	return (i + a);
}
/**
 * _print_char - function to print charactor
 * @specifier: percentage specifier argument
 * @args: charactor argument c
 *
 * Return: charactor when %c is true
 */
void _print_char(char *specifier, va_list args)
{
	char c = va_arg(args, int);

	(void) specifier;
	_putchar(c);
}
/**
 * _print_char_ptr - function to print charactor pointer
 * @specifier: specifier argument of pointer type
 * @args: string argument
 *
 * Return: string when %s is true
 */
void _print_char_ptr(char *specifier, va_list args)
{
	int j = 0;

	if (*specifier == 's')
	{
	char *s = va_arg(args, char*);
		while (s[j])
		{
			_putchar(s[j]);
			j++;
		}
	}
	/*if (*specifier == 'p')
	{
		char* a;
		void* pVoid = va_arg(args, char*);
		a = (char*)pVoid;
		while(a[i])
		{
			_putchar(a[i]);
		}
	}*/
}
/**
 * _print_int - function to print integer
 * @args: valist argument
 * @specifier: ponter specifier for integer
 *
 * Return: an integer type
 */
void _print_int(char *specifier, va_list args)
{
	if(*specifier == 'd')
	{
		int n = (int) va_arg(args, int);
		print_number(n);
	}
	if(*specifier == 'i')
	{
		int n = (int) va_arg(args, int);
		print_number(n);
	}
	if(*specifier == 'u')
	{
		int n = (unsigned int)va_arg(args, int);
		if (n < 0)
		{
			n*= - 1;
		}
		print_number(n);
	}
	if(*specifier == 'o')
	{
		int oct = 0;
		int mul = 1;

		int n = (unsigned int)va_arg(args, int);
		if (n < 0)
		{
			n*= - 1;
		}
		while (n != 0)
		{
			oct = (n % 8) * mul;
			mul = mul * 10;
			n = n / 8;
		}
		print_number(oct);
	}
}
/**
 * print_number - function to print number
 * @n: integer argument
 *
 * Return: number
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
