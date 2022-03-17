#include "main.h"
/**
  * more_numbers - function
  */
void more_numbers(void)
{
	int nums;
	int count;

	for (count = 0; count != 10; count++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			_putchar(nums + '0');
		}
	}
	_putchar('\n');
}
