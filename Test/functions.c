#include <stdlib.h>
#include "main.h"
/**
 * _print_char - function to print charactor
 * @specifier: percentage specifier argument
 * @args: charactor argument c
 *
 * Return: if prints returns 1 byte of text printed
 */
int _print_char(char *specifier, va_list args)
{
	char c = va_arg(args, int);

	(void) specifier;
	_putchar(c);
	return (1);
}
/**
 * _print_char_ptr - function to print charactor pointer
 * @specifier: specifier argument of pointer type
 * @args: string argument
 *
 * Return: how many bytes of printed text
 */
int _print_char_ptr(char *specifier, va_list args)
{
	int j = 0;
	int len = 0;

	if (*specifier == 's')
	{
		char *s = va_arg(args, char*);

		if (!s)
		{
			s = "(null)";
		}
		while (s[j])
		{
			_putchar(s[j]);
			j++;
			len++;
		}
	}
	return (len);
}
/**
 * print_int - function to print int number
 * @n: integer argument
 *
 * Return: how many bytes of printed text
 */
int print_int(int n)
{
	int len = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		len++;

	}
	if (n / 10)
	{
		print_int((n / 10));
	}
	_putchar((n % 10) + '0');
	len++;
	return (len);
}
