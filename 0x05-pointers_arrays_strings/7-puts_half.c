#include "main.h"

/**
  * puts_half - a function that prints half of a string
  * if odd len, n = (length_of_the_string - 1) / 2
  * @str: input
  * Return: half of input
  */

void puts_half(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
		;

	t++;
	for (t /= 2; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
