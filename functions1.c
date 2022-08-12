#include <stdlib.h>
#include "main.h"
/**
 * print_unsi_int - function to print unsigned int number
 * @n: unsigned int
 *
 * Return: length of printed text
 */
int print_unsi_int(unsigned int n)
{
	int len = 0;
	unsigned int lastDigit;
	unsigned int reversed = 0;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		len++;
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
/**
 * print_oct - function to print octal number
 * @n: unsigned int
 *
 * Return: length of printed text
 */
int print_oct(unsigned int n)
{
	int octnum[100];
	int i = 0;
	int j;
	int len = 0;

	while (n != 0)
	{
		octnum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octnum[j] + '0');
		len++;
	}
	return (len);
}
/**
 * print_lowerhex - function to print lower hexa number
 * @n: unsigned int
 *
 * Return: length of printed text
 */
int print_lowerhex(unsigned int n)
{
	char hexa[100];
	int i = 0;
	int remi;
	int j;
	int len = 0;

	while (n != 0)
	{
		remi = n % 16;
		if (remi < 10)
		{
			hexa[i] = remi + 48;
			i++;
		}
		else
		{
			hexa[i] = remi + 55;
			i++;
		}
		n = n / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		if (hexa[j] >= 65 && hexa[j] <= 90)
		{
			_putchar((hexa[j] + 32));
			len++;
		}
		else
		{
			_putchar(hexa[j]);
			len++;
		}
	}
	return (len);
}
/**
 * print_upperhex - function to print upper hexa number
 * @n: unsigned int
 *
 * Return: length of printed text
 */
int print_upperhex(unsigned int n)
{
	char hexa[100];
	int i = 0;
	int remi;
	int j;
	int len;

	while (n != 0)
	{
		remi = n % 16;
		if (remi < 10)
		{
			hexa[i] = remi + 48;
			i++;
		}
		else
		{
			hexa[i] = remi + 55;
			i++;
		}
		n = n / 16;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hexa[j]);
		len++;
	}
	return (len);
}

