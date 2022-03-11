#include <ctype.h>
#include <stdio.h>
/**
  * main - using putchar twice
  * Return: a value
  */
int main(void)
{
	char c;
	char d;

	c = 'a';
	d = toupper(c);
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d += 1;
	}
	putchar('\n');
	return (0);
}
