#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * sum_them_all - sum all para
  * @n: no. of args
  *
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list ap;

	va_start(ap, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(ap, unsigned int), i++)
		{
			;
		}
	va_end(ap);
	return (sum);
}
