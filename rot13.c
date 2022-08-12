#include "main.h"
#include <stdio.h>
/**
 *rot13 - encodes a string using rot13
 * @s : string
 *
 * Return: char
*/
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] > 'm' && s[i] <= 'z')
					|| (s[i] > 'M' && s[i] <= 'Z'))
			{
				s[i] = s[i] - 13;
				break;
			}
			s[i] = s[i] + 13;
			break;
		}
		i++;
	}
	return (s);
}
