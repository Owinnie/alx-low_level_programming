#include "main.h"
/**
  * print_line - function
  * @n: parameter
  */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_' * n);
		_putchar('\n');
	}
}
