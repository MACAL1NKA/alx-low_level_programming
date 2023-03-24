#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 *typedef struct print - new structoru for the project
 *@symbol: as type of variab;e
 *@print_func: function to array
 *
 *
 */
typedef struct print
{
	char *symbol;
	void (*print_func)(va_list arg);
} func_printer;
