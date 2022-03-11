#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
