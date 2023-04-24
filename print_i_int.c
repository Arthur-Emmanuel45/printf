#include "main.h"
/**
 * print_i_int-print interger variables
 * @n:the interger to print
 * Return:an interger
 */
long print_i_int(long n)
{

	long int count;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}


	if (n / 10)
	{
		print_i_int(n / 10);
	}

	count = _putchar(n % 10 + '0');

	return (count);
}
