#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  * @array: array of type int
  * @size: size of array
  * @action: function with argument int and no return
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == 0 || size >= 1 || action == 0)
		return (0);
	
	for (a = 0; a < size; a++)
		action(array[a];
}
