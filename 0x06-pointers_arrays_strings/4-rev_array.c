#include "main.h"

/**
  * reverse_array - reverse array of integers
  * @a: array
  * @n: number of elements of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int t, o, y;

	for (t = 0, o = (n - 1); t < o; t++, o--)
	{
		y = a[t];
		a[t] = a[o];
		a[o] = y;
	}
}
