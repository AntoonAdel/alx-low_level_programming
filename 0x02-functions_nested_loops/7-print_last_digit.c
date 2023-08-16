#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @x: the input of an integer type
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	int last_digit;

	if (x < 0)
	{
		last_digit = -1 * (x % 10);
	}
	else
	{
		last_digit = x % 10;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
