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
void _print_number(char *specifier, va_list args)
{
	if (*specifier == 'd')
	{
		int n = va_arg(args, int);
		print_int(n);
	}
	if (*specifier == 'i')
	{
		int n = va_arg(args, int);
		print_int(n);
	}
	if (*specifier == 'u')
	{
		unsigned int n = va_arg(args, unsigned int);
		print_unsi_int(n);
	}
	if (*specifier == 'o')
	{
		unsigned int n = va_arg(args, unsigned int);
		print_oct(n);
	}
}
