#include <stdlib.h>
#include <stdio.h>
#include "main.h"
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
