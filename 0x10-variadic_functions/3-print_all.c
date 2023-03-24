#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *_char - new char
 *@arg: new input
 *Return:nothing
 */
void _char(va_list arg)
{
	char c = va_arg(arg, int);
	printf("%c", c);
}
/**
 *_int - new int
 *@arg: new
 *Return:nothing
 */
void _int(va_list arg)
{
	int c =va_arg(arg, int);
	printf("%d", c);
}
/**
 *_float _ new float
 *@arg: new list
 *Return:nothing
 */
void _float(va_list arg)
{
	float n = va_arg(arg, double);
	printf("%f", n);
}
/**
 *print_string - new string
 *@arg: new arg
 *Return:nothing
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nill)");
		return;
	}
	printf("%s", str);
}
/**
 *format - new formato
 *
 *
 *Return:nothing
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", print_string}
	};
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
