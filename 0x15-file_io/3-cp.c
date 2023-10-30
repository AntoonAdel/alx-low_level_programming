#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * main - program that copies the content of a file to another file
  * @argc: Counts the number of parameters that go into main
  * @argv: Pointer of array of pointers containing strings entering main
  * Return: Always 0 on (Success)
  * if the number of argument is not the correct one, exit with code 97
  * and print Usage: cp file_from file_to, followed by a new line,
  * on the POSIX standard error
  * if file_from does not exist, or if you can not read it, exit with
  * code 98 and print Error: Can't read from file NAME_OF_THE_FILE,
  * followed by a new line, on the POSIX standard error
  * if you can not close a file descriptor ,
  * exit with code 100 and print Error:
  * Can't close fd FD_VALUE, followed by a new line,
  * on the POSIX standard error
  */

int main(int argc, char **argv)
{
	int fp_from, fp_to, checkrd, checkwrt, checker1, checker2;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}

	fp_from = open(argv[1], O_RDONLY);

	if (fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fp_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fp_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fp_from), exit(99);
	}

	while ((checkrd = read(fp_from, buffer, 1024)) > 0)
	{
		checkwrt = write(fp_to, buffer, checkrd);
		if (checkwrt != checkrd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (checkrd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	checker1 = close(fp_from);
	if (checker1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}

	checker2 = close(fp_to);

	if (checker2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}

	return (0);
}
