#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: b is pointing to a string of 0 and 1 chars
  * Return: Converted number or 0 if
  * there is one or more chars in the string b that is not 0 or 1
  * or if b is NULL
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rslt = 0, bn, t;
	int a = 0;

	if (b == 0)
	{
		return (0);
	}

	while (b[a] != 0)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		a++;
	}

	a = a - 1;

	for (t = 0; a >= 0; t++, a--)
	{
		if (b[a] == '0')
		{
			bn = 0;
		}

		else if (b[a] == '1')
		{
			bn = 1;
		}

		bn = bn << t;
		rslt = rslt | bn;
	}

	return (rslt);
}
