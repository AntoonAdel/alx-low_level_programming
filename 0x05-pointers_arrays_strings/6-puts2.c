#include "main.h"

/**
  * puts2 - function should print only one character out of two
  * starting with the first one
  * @str: input
  * Return: print
  */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; ++a)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
