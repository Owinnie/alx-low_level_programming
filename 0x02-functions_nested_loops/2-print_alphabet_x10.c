#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets
  *
  * Description: in lowercase ten times
  * Return: Nothing
  */
void print_alphabet_x10(void)
{
	int j;
	int ch;

	j = 0;
	while (j < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		j++;
		putchar('\n');
	}
}
