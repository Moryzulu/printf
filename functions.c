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
 * _print_rev_str - function to print string in reverse
 * @specifier: specifier argument of pointer type
 * @args: string argument
 *
 * Return: how many bytes of printed text
 */
int _print_rev_str(char *specifier, va_list args)
{
	int i = 0;
	int j = 0;
	int len = 0;
	int slen = 0;
	char arr[100];

	if (*specifier == 'r')
	{
		char *s = va_arg(args, char*);

		if (!s)
		{
			s = "(null)";
		}
		else
		{
			while (s[slen] != '\0')
			{
				slen++;
			}
			for (i = 0; i < slen; i++)
			{
				arr[i] = s[slen - i - 1];
			}
			for (j = 0; j < slen; j++)
			{
				_putchar(arr[j]);
				len++;
			}
		}
	}
	return (len);
}
/**
 * _print_rot13 - function to print rot13'ed string
 * @specifier: specifier argument of pointer type
 * @args: string argument
 *
 * Return: how many bytes of printed text
 */
int _print_rot13(char *specifier, va_list args)
{
	int i = 0;
	int len = 0;
	int alen = 0;
	char s[100];

	if (*specifier == 'R')
	{
		char *a = va_arg(args, char*);

		if (!a)
		{
			a = "(null)";
		}
		else
		{
			while (a[alen] != '\0')
			{
				s[alen] = a[alen];
				alen++;
			}
			while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			{
				if ((s[i] > 'm' && s[i] <= 'z') || (s[i] > 'M' && s[i] <= 'Z'))
				{
					s[i] = s[i] - 13;
					_putchar(s[i]);
					len++;
					i++;
				}
				s[i] = s[i] + 13;
				_putchar(s[i]);
				len++;
				i++;
			}
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

int print_int(long n)
{
	int len = 0;
	int lastDigit;
	int reversed = 0;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	if (n < 0)
	{
		_putchar('-');
		len++;
		n = n * -1;
	}
	lastDigit = n % 10;
	n = n / 10;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n = n / 10;
		count++;
	}
	while (reversed > 0)
	{
		_putchar((reversed % 10) + '0');
		reversed = reversed / 10;
		len++;
		count--;
	}
	while (count != 0)
	{
		_putchar('0');
		len++;
		count--;
	}
	_putchar(lastDigit + '0');
	len++;
	return (len);
}
