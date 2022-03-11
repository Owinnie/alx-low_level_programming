#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	char num;

	num = '0x0';
	while (num <= '0xf')
	{
		putchar(num);
		num += 1;
	}
	putchar('\n');
	return (0);
}
