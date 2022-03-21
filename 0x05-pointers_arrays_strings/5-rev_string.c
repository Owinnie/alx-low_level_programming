#include "main.h"
/**
  * rev_string - reverses a string
  * @s: para
  */
void rev_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		index++;
		_putchar(s[index]);
		s++;
	}
	_putchar('\n');
	while (index > 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
