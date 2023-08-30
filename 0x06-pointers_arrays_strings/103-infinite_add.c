#include "main.h"

/**
  * infinite_add - adds two numbers
  * @n1: first number
  * @n2: second number
  * @r: result
  * @size_r: buffer size
  * Return: sum
  */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int t = 0, o = 0, k, l = 0, f, s, d = 0;

	while (n1[t] != '\0')
		t++;
	while (n2[o] != '\0')
		o++;
	if (t > o)
		l = t;
	else
		l = o;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		t++;
		o++;
		if (t >= 0)
			f = n1[t] - '0';
		else
			f = 0;
		if (o >= 0)
			s = n2[o] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
