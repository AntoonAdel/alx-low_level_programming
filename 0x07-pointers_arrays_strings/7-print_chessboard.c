#include "main.h"

/**
  * print_chessboard - Entry point
  * @a: array
  * Return: Always 0 (Success)
  */

void print_chessboard(char (*a)[8])
{
	int t, o;

	for (t = 0; t < 8; t++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[t][o]);
		}
		_putchar('\n');
	}
}
