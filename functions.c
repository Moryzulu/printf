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

}
/**
 * print_number - function to print number
 * @n: integer argument
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
