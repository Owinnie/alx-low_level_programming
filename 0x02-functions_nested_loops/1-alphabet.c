#include "main.h"
/**
  * print_alphabet - prints alphabets
  * in lowercase
  * Return: Nothing
  */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
