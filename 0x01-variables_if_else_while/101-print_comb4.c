#include <stdlib.h>
#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	int num;
	int num2;

	num = 0;
	num2 = 0;
	while (num < 10)
	{
		while (num2 < 10)
		{
			if (num != num2 && num < num2)
			{
				putchar(48 + num);
				putchar(48 + num2);
				if (num + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2 += 1;
		}
		num += 1;
	}
	putchar('\n');
	return (0);
}
