#include "main.h"
/**
  * rev_string - reverses a string
  * @s: para
  */
void rev_string(char *s)
{
	char *w = s;

	while (*w != '\0')
	{
		_putchar(*w);
		w++;
	}
	_putchar('\n');
	while (w--)
	{
		_putchar(*w);
	}
	_putchar('\n');
}
