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
	while (s[index] != '\0')
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
