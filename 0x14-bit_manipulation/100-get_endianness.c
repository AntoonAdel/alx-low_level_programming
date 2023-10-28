#include "main.h"

/**
  * get_endianness - checks the endianness
  * void: No argument
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int a = 1, endianness;
	char *ch = (char *)&a;

	if (*ch == 1)
	{
		endianness = 1;
	}

	else
	{
		endianness = 0;
	}

	return (endianness);
}
