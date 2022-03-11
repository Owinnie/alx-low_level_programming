#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d\n", num);
		num += 1;
	}
	return (0);
}
