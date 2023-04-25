#include "main.h"
/**
 * print_int-print interger variables
 * @n:the interger to print
 * Return:an interger
 */
int print_int(int n)
{

	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		return(0);
	else
	{
		count += 1;
		print_int(n / 10);
	}

	_putchar(n % 10 + '0');

	return (count);
}
