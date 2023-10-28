#include "main.h"

/**
  * bin_rep - prints binary representation of number with & and Shift Right
  * operators, but uses recursion to reverse the result
  * @a: decimal number
  * @checker: checks for special case number 0
  * Return: 0 (Success)
  */

void bin_rep(unsigned long int a, int checker)
{
	if (checker == 1)
	{
		_putchar('0');
		return (0);
	}

	if (a == 0)
	{
		return (0);
	}

	bin_rep(a >> 1, checker);

	if ((a & 1) == 0)
	{
		_putchar('0');
	}

	if ((a & 1) == 1)
	{
		_putchar('1');
	}
}

/**
  * print_binary - prints the binary representation of a number
  * @n: base 10 number
  * Return: No return
  */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		bin_rep(n, 1);
	}
	else
	{
		bin_rep(n, 0);
	}
}
