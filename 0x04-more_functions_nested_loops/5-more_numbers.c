#include "main.h"
/**
  * more_numbers - function
  */
void more_numbers(void)
{
	int nums;
	int count;

	count = 0;
	while (count != 10)
	{
		nums = 0;
		while (nums <= 14)
		{
			_putchar(nums);
			nums++;
		}
		count++;
	}
	_putchar('\n');
}
