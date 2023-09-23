#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * array_range -  creates an array of integers
  * The array created should contain all the values
  * from min (included) to max (included), ordered from min to max
  * @min: minimal value
  * @max: maximum value
  * Return: Pointer to allocated memory of s1 + nbytes of s2
  */

int *array_range(int min, int max)
{
	int *ptr;
	int size, a;

	if (min > max)
		return (0);

	if (max > min)
		size = max - min + 1;
	else if (max == min)
		size = 2;

	ptr = malloc(sizeof(int) * size);
	if (ptr == 0)
		return (0);

	for (a = 0, min <= max; a++)
		ptr[a] = min++;
	if (max == min)
		ptr[a] = max;

	return (ptr);
}
