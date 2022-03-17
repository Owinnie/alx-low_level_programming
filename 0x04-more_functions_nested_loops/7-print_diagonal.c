#include "main.h"
/**
  * print_diagonal - function
  * @n: parameter
  */
void print_diagonal(int n)
{
	char c;
	int count;

	c = '\\';
	count = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count != n)
		{
			_putchar(c * n);
			count++;
		}
		_putchar('\n');
	}
}
