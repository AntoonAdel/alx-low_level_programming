#include "main.h"
/**
 *_isalpha – print the alphabet if lower or upper
 * Description: prints
 *@c: is the char to be checked
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
