#include "main.h"
/**
  * print_most_numbers - function
  */
void print_most_numbers(void)
{
	int nums;

	for (nums = 0; nums <= 9; nums++)
	{
		if (nums == 2 || nums == 4)
		{
			continue;
		}
		else
		{
			_putchar(nums + '0');
		}
	}
	_putchar('\n');
}
