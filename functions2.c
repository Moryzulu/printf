#include <stdlib.h>
#include "main.h"
/**
 * print_binary -  function to convert unsigned int to binary
 * @n: unsigned int
 *
 * Return: length of printed text
 */
int print_binary(unsigned int n)
{
	int len = 0;
	int i;
	int arr[100];

	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n = n / 2;
	}
	for (i = i - 1 ; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
		len++;
	}
	return (len);
}
