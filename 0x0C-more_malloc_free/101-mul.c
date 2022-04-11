#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiply 2 + nums
  * Return: int
  */

// placeholder functions... unfinished...

int main(void)
{
	unsigned int num1, num2;

	if (!(mul(num1, num2)))
	{
		_putchar("Error");
		_putchar('\n');
		exit(98);
	}
	return (0);
}
/**
  * mul - multiply 2 nums
  * @num1: para1
  * @num2: para2
  * Return: int
  */
int mul(unsigned int num1, unsigned int num2)
{
	unsigned int result;

	result = num1 * num2;
	_putchar(result);
	_putchar('\n');
}
