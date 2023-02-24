#include <unistd.h>

/**
 * _putchar - writes c 
 * @c: The input
 *
 * Return: On 1 -1
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
