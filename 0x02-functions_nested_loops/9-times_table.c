#include "main.h"
/**
  * times_table - 9 table
  */
void times_table(void)
{
	int n;

	for (n = 0; n <= 10; n++)
	{
		_putchar(n - 1);
		_putchar(10 - n);
		_putchar('\n');
	}
}

