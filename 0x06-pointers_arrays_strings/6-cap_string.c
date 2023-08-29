#include "main.h"

/**
  * cap_string - Capitalizes all words of a string.
  * @str: The string to be capitalized.
  * Return: A pointer to the changed string.
  */

char *cap_string(char *str)
{
	int ltr = 0;

	while (str[ltr])
	{
		while (!(str[ltr] >= 97 && str[ltr] <= 122))
			ltr++;

		if (str[ltr - 1] == ' ' ||
			str[ltr - 1] == '\t' ||
			str[ltr - 1] == '\n' ||
			str[ltr - 1] == ',' ||
			str[ltr - 1] == ';' ||
			str[ltr - 1] == '.' ||
			str[ltr - 1] == '!' ||
			str[ltr - 1] == '?' ||
			str[ltr - 1] == '"' ||
			str[ltr - 1] == '(' ||
			str[ltr - 1] == ')' ||
			str[ltr - 1] == '{' ||
			str[ltr - 1] == '}' ||
			ltr == 0)
		{
			str[ltr] -= 32;
		}

		ltr++;
	}

	return (str);
}
