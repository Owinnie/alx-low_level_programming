#include "main.h"
/**
  * rev_string - reverses a string
  * @s: para
  */
void rev_string(char *s)
{
	int index = 0;
	char *w = s;

	while (*w != '\0')
	{
		index++;
		_putchar(*w);
		w++;
	}
	_putchar('\n');
	while (w[index] != '\0')
	{
		_putchar(w[index]);
		index--;
	}
	_putchar('\n');
}
