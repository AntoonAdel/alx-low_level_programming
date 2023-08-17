#include "main.h"

/**
  * print_square - function that prints a square.
  * @size: is the number of times the character _ should be printed.
  * Return: Always 0 (Success).
  */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a;

		for (a = 1; a <= size; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
