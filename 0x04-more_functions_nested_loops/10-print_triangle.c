#include "main.h"
/**
  * print_triangle - function
  * @size: parameter
  */
void print_triangle(int size)
{
	int count;
	int space;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			if (count < size - 1)
			{
				_putchar('#');
				_putchar('\n');
				_putchar('#');
				for (space = 0; space < count; space++)
				{
					_putchar(' ');
				}
				_putchar('#');
				_putchar('\n');
			}
			else
			{
				for (space = 0; space <= count; space++)
				{
					_putchar('#');
				}
			}
		}
		_putchar('\n');
	}
}
