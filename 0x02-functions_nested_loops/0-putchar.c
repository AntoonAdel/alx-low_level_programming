#include <unistd.h>
#include <stdio.h>
#include <main.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * main - Entry point
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char a = ('_');
	char b = ('p');
	char c = ('u');
	char d = ('t');
	char e = ('c');
	char f = ('h');
	char g = ('a');
	char h = ('r');

	putchar(a);
	putchar(b);
	putchar(c);
	putchar(d);
	putchar(e);
	putchar(f);
	putchar(g);
	putchar(h);
	putchar('\n');
}
