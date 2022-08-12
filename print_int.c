#include "main.h"
#include <limits.h>
#include <stddef.h>
/**
 * _print_number - function to print numbers
 * @args: valist argument
 * @specifier: ponter specifier for number
 *
 * Return: void
 */
int _print_number(char *specifier, va_list args)
{
	int len = 0;

	if (*specifier == 'd')
	{
		int n = va_arg(args, int);

		len = print_int(n);
	}
	if (*specifier == 'i')
	{
		int n = va_arg(args, int);

		len = print_int(n);
	}
	if (*specifier == 'u')
	{
		unsigned int n = va_arg(args, unsigned int);

		 len = print_unsi_int(n);
	}
	if (*specifier == 'o')
	{
		unsigned int n = va_arg(args, unsigned int);

		len = print_oct(n);
	}
	if (*specifier == 'x')
	{
		unsigned int n = va_arg(args, unsigned int);

		len = print_lowerhex(n);
	}
	if (*specifier == 'X')
	{
		unsigned int n = va_arg(args, unsigned int);

		len = print_upperhex(n);
	}
	return (len);
}
