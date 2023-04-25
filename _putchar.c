#include <unistd.h>
/**
 * _putchar - produce a single charcter
 * @c: The character to print
 * Return:a single char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
