#include "main.h"
/**
  * print_numbers - function
  */
void print_numbers(void)
{
	int nums;

	nums = 0;
	while (nums <= 9)
	{
		_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
