#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, n, t;

	for (a = 0; a < 9; a++)
	{
		for (n = a + 1; n < 9; n++)
		{
			for ( t = n + 1; t <= 9; t++)
			{
				putchar(a + '0');
				putchar(n + '0');
				putchar(t + '0');
				if (a != 7 || n != 8 || t != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
