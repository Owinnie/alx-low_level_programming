#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: para
  */
void puts_half(char *str)
{
	int odd;
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 3 == 0)
	{
		odd = (count - 1) / 2;
	}
	else
	{
		odd = count / 2;
	}
	while (odd <= count)
	{
		_putchar(str[odd]);
		odd++;
	}
	_putchar('\n');
}
