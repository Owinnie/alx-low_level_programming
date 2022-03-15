#include <stdio.h>
#include "main.h"
/**
  * print_alphabet - prints alphabets
  * Description: in lowercase
  * main - calls print_alphabet
  * Description: call print_alphabet
  * Return: 0
  */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
