#include "main.h"
/**
 * main – Entry point
 * Description: print
 * Return: 1 if 'c' lowercase (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
