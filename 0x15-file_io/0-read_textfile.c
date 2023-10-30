#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * read_textfile -  reads a text file and prints it
  * to the POSIX standard output
  * @filename: name of the file
  * @letters: number of letters it should read and print
  * Return: returns the actual number of letters it could read and print
  *	0 if file cannot be opened or read
  *	0 if filename is NULL
  *	0 if write fails or does not write expected amount of bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, checkrd, checkwrt;
	char *ch;

	if (filename == 0)
	{
		return (0);
	}

	ch = malloc(letters + 1);

	if (ch == 0)
	{
		return (0);
	}

	fp  = open(filename, O_RDONLY);

	if (fp == -1)
	{
		return (free(ch), 0);
	}

	checkrd = read(fp, ch, letters);

	if (checkrd == -1)
	{
		return (free(ch), 0);
	}

	ch[letters] = '\0';

	checkwrt = write(STDOUT_FILENO, ch, checkrd);
	if (checkwrt == -1)
	{
		return (free(ch), 0);
	}

	free(ch);
	close(fp);
	return (checkwrt);
}
