#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	char num;
	char letter;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num += 1;
	}
	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter);
		letter += 1;
	}
	putchar('\n');
	return (0);
}
