#include "main.h"
/**
  * print_triangle - function
  * @size: parameter
  */
void print_triangle(int size)
{
	char c;
	int count;

	c = '#';
	count = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count < size)
		{
			if (count != size - 1)
			{
				_putchar(c);
				_putchar('\n');
				_putchar(c);
				_putchar(' ' * count);
				_putchar(c);
				_putchar('\n');
			}
			else
			{
				_putchar(c * count);
			}
			count++;
		}
		_putchar('\n');
	}
}
