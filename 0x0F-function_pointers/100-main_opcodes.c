#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - program that prints the opcodes of its own main function
  * @argc: Counts the number of parameters that go into main
  * @argv: Pointer of array of pointers containing strings entering main
  * Return: 0 on succes, 1 on argv != 2, 2 on negative bytes in argv
  */

int main(int argc, char **argv)
{
	int a, byts;
	char *ptr;

	if (argc != 2)
		printf("Error\n", exit(1);

	byts = atoi(argv[1]);

	if (byts < 0)
		printf("Error\n"), exit(2);

	ptr = (char *)main;

	for (a = 0; a < byts - 1; a++)
		printf("%02hhx ", ptr[a]);

	printf("%02hhx\n", ptr[a]);

	return (0);
}
