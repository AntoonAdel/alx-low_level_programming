#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line on the terminal.
  * @n: is the number of times the character _ should be printed.
  * Return: Always 0 (Success).
  */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, t;

		for (a = 0; a < n; a++)
		{
			for (t = 0; t < n; t++)
			{
				if (t == a)
				{
					_putchar(92);
				}
				else if (t < a)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
