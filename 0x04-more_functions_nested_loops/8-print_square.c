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
		int a, t;

		for (a = 0; a < size; a++)
		{
			for (t = 0; t < size; t++)
			{

				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
