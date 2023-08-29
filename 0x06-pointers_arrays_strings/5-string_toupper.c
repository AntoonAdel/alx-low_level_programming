#include "main.h"

/**
  * string_toupper - change all lowercase to uppercase
  * @ltr: pointer
  * Return: ltr
  */

char *string_toupper(char *ltr)
{
	int a;

	for (a = 0; ltr[a] != '\0'; a++)
	{
		if (ltr[a] >= 97 && ltr[a] <= 122)
		{
			ltr[a] = ltr[a] - 32;
		}
	}
	return (ltr);
}
