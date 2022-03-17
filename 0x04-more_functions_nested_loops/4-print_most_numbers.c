#include "main.h"
/**
  * print_most_numbers - function
  */
void print_most_numbers(void)
{
	int nums;

	nums = 0;
	while (nums <= 9)
	{
		if (nums == 2 || nums == 4)
			continue;
		else
			_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
