#include "main.h"
#include <stdio.h>
/**
  * print_most_numbers - function
  */
void print_most_numbers(void)
{
	int nums;

	nums = 48;
	while (nums <= 57)
	{
		if (nums == 50 || nums == 52)
			continue;
		else
			_putchar(nums);
		nums++;
	}
	_putchar('\n');
}
