#include <stdio.h>
#include <stdlib.h>
/**
  * main - function
  * Return: 0
  */
int main(void)
{
	int nums;

	for (nums = 1; nums <= 100; nums++)
	{
		if (nums % 3 == 0 && nums % 5 == 0)
			printf("%s ", "FizzBuzz");
		else if (nums % 3 == 0)
			printf("%s ", "Fizz");
		else if (nums % 5 == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", nums);
	}
	printf("\n");
	return (0);
}
