#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @s: input string
  * Return: encodes string
  */

char *rot13(char *s)
{
	int a;

	char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char strrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p = s;

	while (*s)
	{
		for (a = 0; a <= 52; a++)
		{
			if (*s == str[a])
			{
				*s = strrot[a];
				break;
			}
		}
		s++;
	}
	return (p);
}
