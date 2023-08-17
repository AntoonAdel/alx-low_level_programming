#include "main.h"

/**
  * more_numbers - function that print numbers..
  *
  *Return: 1 or 0.
  */

void more_numbers(void)
{
	int row, num;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar('1');
			}
			_putchar(num % 10 + 48);
		}
		_putchar('\n');
	}
}
