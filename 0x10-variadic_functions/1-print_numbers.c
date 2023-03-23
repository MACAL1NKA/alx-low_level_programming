#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - new project
 * @separator: a separator
 * @n: number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, int));

if (separator && i != n - 1)
	printf("%s", separator);
}
va_end(ap);
printf("\n");
}
