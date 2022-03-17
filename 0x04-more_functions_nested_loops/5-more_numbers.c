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
			if (nums >= 10)
			{
				_putchar(nums / 10 + 48);
			}
			else
			{
				_putchar(nums % 10 + 48);
			}
		}
	}
	_putchar('\n');
}
