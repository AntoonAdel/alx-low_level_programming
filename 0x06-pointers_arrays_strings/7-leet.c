#include "main.h"

/**
  * leet - encode into 1337speak
  * @ch: input value
  * Return: ch value
  */

char *leet(char *ch)
{
	int a, n;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; ch[a] != '\0'; a++)
	{
		for (n = 0; n < 10; n++)
		{
			if (ch[a] == s1[n])
			{
				ch[a] = s2[n];
			}
		}
	}
	return (ch);
}
