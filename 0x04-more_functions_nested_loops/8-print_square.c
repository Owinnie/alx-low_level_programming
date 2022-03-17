#include "main.h"
/**
  * print_square - function
  * @size: parameter
  */
void print_square(int size)
{
	char c;
	int width;

	c = '#';
	width = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(c * size);
		_putchar('\n');
		while (width < size)
		{
			if (width == size - 1)
			{
				_putchar(c);
			}
			else
			{
				_putchar(c);
				_putchar('\n');
			}
			width++;
		}
		_putchar(c * size - 1);
		_putchar('\n');
	}
}
