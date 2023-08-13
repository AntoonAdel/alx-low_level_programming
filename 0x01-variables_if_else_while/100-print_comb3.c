#include <stdio.h>
/**
 * main prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, n;

	for (a = 0; a < 9; a++)
	{
		for (n = a + 1; n <= 9; n++)
		{
			putchar(a + '0');
			putchar(n + '0');
			if (a != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
