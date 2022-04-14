#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * print_numbers - print nums
  * @separator: const char
  * @n: const int
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	_putchar('\n');
}
