#include <string.h>
#include <stdio.h>
/**
 * rev_string -  prints a string, in reverse, followed by a new line
 * @s : a pointer to s
 *
 * Return: void
*/
int rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*s != '\0')
	{
		s++;
		j++;
	}
	printf("%d\n", j);

	for (i = 0; i < (j / 2); i++)
	{
		temp = s[j - 1 - i];
		s[j - 1 - i] = s[i];
		s[i] = temp;
		printf("%c\n", s[i]);
	}
	return (0);
}
int main(void)
{
	char *s = "\nThis sentence is retrieved from va_args!";
	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);

	return (0);
}
