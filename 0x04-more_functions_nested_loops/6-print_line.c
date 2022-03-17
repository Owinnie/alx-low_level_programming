#include "main.h"
/**
  * print_line - function
  * @n: parameter
  */
void print_line(int n)
{
	char c = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(c * n);
		_putchar('\n');
	}
}
