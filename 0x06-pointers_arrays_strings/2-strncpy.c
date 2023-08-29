#include "main.h"

/**
  * _strncpy - copy a string
  * @dest: input value
  * @src: input value
  * @n: input value
  * Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++
	}

	return (dest);
}
