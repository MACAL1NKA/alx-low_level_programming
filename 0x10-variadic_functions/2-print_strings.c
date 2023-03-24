#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints any strings
 * @separator: input separator
 * @n: number of argumaens
 * Return:nothing is returned
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *str;

va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nill)");

	if (separator && i != n - 1)
		printf("%s", separator);
}

	va_end(ap);
	printf("\n");
}
