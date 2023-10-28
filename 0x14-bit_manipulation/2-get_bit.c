#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: base 10 number
  * @index: index to print
  * Return: value of the bit at index index or -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = 0, rslt;

	if (index > 63)
	{
		return (-1);
	}

	for (a = 0; a < index; a++)
	{
		n = n >> 1;
	}

	if ((n & 1) == 1)
	{
		rslt = 1;
	}

	if ((n & 1) == 0)
	{
		rslt = 0;
	}

	return (rslt);
}
