#include "main.h"
/**
  * rev_string - reverses a string
  * @s: para
  */
void rev_string(char *s)
{
	char *w = s;
	int index = 0;

	while (*w != '\0')
	{
		index++;
		_putchar(*w);
		w++;
	}
	while (index > 0)
	{
		w--;
		_putchar(*w);
		index--;
	}
	s = w;
}
