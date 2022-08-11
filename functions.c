#include <stdlib.h>
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

		if (s != NULL)
		{
			while (s[j])
			{
				_putchar(s[j]);
				j++;
			}
		}
		else
		{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		}
	}
}
/**
 * print_number - function to print number
 * @n: integer argument
 * Return: number
 */
void print_int(int n)
{
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)
	{
		print_int((n / 10));
	}
	_putchar((n % 10) + '0');
}
/*void print_int(int n)
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
		print_int((n / 10));
	}
	_putchar((n % 10) + '0');
}*/
