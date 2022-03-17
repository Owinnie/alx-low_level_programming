#include "main.h"
/**
  * _isupper - check for uppercase
  * @c: parameter
  * Return: 0
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		_putchar(1);
	else
		_putchar(0);
	return (0);
}
/**
  * main - calls _isupper
  * Return: 0
  */
int main(void)
{
	int c = 'a';

	_isupper(c);
	c = 'B';
	_isupper(c);
	return (0);
}
