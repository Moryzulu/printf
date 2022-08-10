#include "main.h"
/**
 * _print_int - function to print integer
 * @args: valist argument
 * @specifier: ponter specifier for integer
 *
 * Return: an integer type
 */
void _print_int(char *specifier, va_list args)
{
	if (*specifier == 'd')
	{
		int n = (int) va_arg(args, int);

		print_number(n);
	}
	if (*specifier == 'i')
	{
		int n = (int) va_arg(args, int);

		print_number(n);
	}
	if (*specifier == 'u')
	{
		int n = (unsigned int)va_arg(args, int);

		if (n < 0)
		{
			n *= -1;
		}
		print_number(n);
	}
	if (*specifier == 'o')
	{
		int oct = 0;
		int mul = 1;
		int n = (unsigned int)va_arg(args, int);

		if (n < 0)
		{
			n *= -1;
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
