#include "main.h"

/**
  * print_line - function that draws a straight line in the terminal..
  * @n: is the number of times the character _ should be printed.
  * Return: Always 0 (Success).
  */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
