#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o, n;

	for (o = 0; o <= 99; o++)
	{
		for (n = o + 1; n <= 99; n++)
		{
			putchar((o / 10) + '0');
			putchar((o % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');

			if (o != 98 || n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
