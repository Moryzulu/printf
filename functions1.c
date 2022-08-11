#include <stdlib.h>
#include "main.h"
/**
 * print_unsi_int - function to print unsigned int number
 * @n: unsigned int 
 * Return: void
 */
void print_unsi_int(unsigned int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n / 10)
	{
		print_unsi_int(n / 10);
	}
	_putchar((n % 10) + '0');
}
/**
 * print_oct - function to print octal number
 * @n: unsigned int 
 * Return: void
 */
void print_oct(unsigned int n)
{
	int octnum[100];
	int i = 0;
	int j;

	while (n != 0)
	{
		octnum[i] = n % 8;
		n = n / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octnum[j] + '0');
	}
}
