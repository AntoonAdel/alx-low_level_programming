#include "main.h"

/**
  * _isupper - function that checks for uppercase character.
  * @c: the character that wiil be checked.
  *Return: 1 if the c is uppercase
  *        0 if the c otherwise
  */

int _isupper(int c)
{
	char c;

	_putchar(c);
	_putchar(':');
	_putchar(' ');

	if (c >= 65 && c <= 90)
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
