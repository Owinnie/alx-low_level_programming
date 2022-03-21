#include "main.h"
/**
  * puts_half - prints half of a string
  * @str: para
  */
void puts_half(char *str)
{
	int count, n, odd;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (odd = count / 2; str[odd] != '\0'; odd++)
		{
			_putchar(str[odd]);
		}
	}
	else if (count % 2)
	{
		for (n = (count - 1) / 2; n < count - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
