#include <stdlib.h>
#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	int num;

	num = 10;
	while (num < 100)
	{
		putchar(48 + num);
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
