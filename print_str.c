#include "main.h"
/**
 * print_str-print a string
 * @c:the stirng to print
 * Return:the count value of the string
 */
int print_str(char *c)
{
	int i = 0;
	int count = 0;

	if (c != '\0')
	{
		while (c[i] != '\0')
		{
			_putchar(c[i]);
			count += 1;
			i++;
		}
	}

	return (count);
}
