#include <unistd.h>

/**
 *_putchar - file
 * @c: The chimput
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
