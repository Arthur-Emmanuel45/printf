#include "main.h"
/**
 *_printf-produce the prinft lib
 *@format:first the string
 *@...:other arg
 *Return:count of the output
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, count = 0, value;

	va_list li;

	va_start(li, format);

	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(li, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			value = print_str(va_arg(li, char*));
			i++;
			count += (value - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 11] == 'd' || format[i + 1] == 'i')
		{
			count += print_int(va_arg(li, int));
			i++;
		}
		count += 1;
	}
	return (count);
	va_end(li);
}
