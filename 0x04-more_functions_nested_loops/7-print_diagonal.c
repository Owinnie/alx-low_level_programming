#include "main.h"
/**
  * print_diagonal - function
  * @n: parameter
  */
void print_diagonal(int n)
{
	int count;
	int space;

	count = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < n)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
}
