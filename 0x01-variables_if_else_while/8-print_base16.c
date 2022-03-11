#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	int num;

	num = 0x0;
	while (num <= 0xF)
	{
		putchar(48 + num);
		num += 1;
	}
	putchar('\n');
	return (0);
}
