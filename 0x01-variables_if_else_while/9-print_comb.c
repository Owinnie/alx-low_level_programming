#include <stdlib.h>
#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	int num;

	while (num < 10)
	{
		putchar(48 + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
