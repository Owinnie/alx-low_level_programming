#include "main.h"
/**
  * print_square - function
  * @size: parameter
  */
void print_square(int size)
{
	int width;
	int length;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 0; length < size; length++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
