#include "main.h"
/**
  * print_sign - prints the sign of a mo.
  * @n: parameter
  *
  * Description: printing signs (+ -)
  * Return: 0
  */
int print_sign(int n)
{
	int pos;
	int zro;
	int neg;

	pos = '+';
	zro = '0';
	neg = '-';
	if (n > 0)
	{
		_putchar(pos);
		_putchar('\n');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(zro);
		_putchar('\n');
		return (0);
	}
	else
	{
		_putchar(neg);
		_putchar('\n');
		return (-1);
	}
}
