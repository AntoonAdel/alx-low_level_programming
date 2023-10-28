#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to
  * flip to get from one number to another
  * @n: base 10 number
  * @m: base 10 number
  * Return: Number of bits you would need to flip
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a;
	int num = 0;

	a = n ^ m;

	while (a != 0)
	{
		num += a & 1;
		a = a >> 1;
	}

	return (num);
}
