#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - prints chessboard
  * @a: para1
  */
void print_chessboard(char (*a)[8])
{
	int index, jndex;

	for (index = 0; index < 8; index++)
	{
		for (jndex = 0; jndex < 8; jndex++)
		{
			_putchar(a[index][jndex]);
		}
		_putchar('\n');
	}
}
