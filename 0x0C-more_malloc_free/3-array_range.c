#include "main.h"
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
		return (NULL);

	else
		size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0, min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
