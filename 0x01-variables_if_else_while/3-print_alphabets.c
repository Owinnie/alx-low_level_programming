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
	while (c <= 'z' && d <= 'Z')
	{
		putchar(c);
		c += 1;
		putchar(d);
		d += 1;
	}
	putchar('\n');
	return (0);
}
