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
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 3 == 0)
	{
		odd = (count - 1) / 2;
		for (; odd < count - 1; odd++)
		{
			_putchar(str[odd]);
		}
	}
	else
	{
		odd = count / 2;
		for (; odd < count - 1; odd++)
		{
			_putchar(str[odd]);
		}
	}
	_putchar('\n');
}
