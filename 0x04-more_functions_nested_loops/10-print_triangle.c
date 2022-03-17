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
		for (count = 1; count <= size; count++)
		{
			for (space = count; space < size; space++)
			{
				_putchar(' ');
			}
			for (space = 1; space <= count; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
