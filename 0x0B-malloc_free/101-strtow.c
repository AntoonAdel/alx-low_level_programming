#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * strtow - concatenates arguments.
  * @str: String to be splitted.
  * Return: a pointer to array of String.
  */

char **strtow(char *str)
{
	char *array = NULL;
	unsigned int a = 0, n = 0, t;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc((a + n + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (t = 0; t < a; t++)
		array[t] = str[t];
	a = t;
	for (t = 0; t < n; t++)
	{
		array[a] = str[t];
		a++;
	}
	array[a] = '\0';
	return (NULL);
}
