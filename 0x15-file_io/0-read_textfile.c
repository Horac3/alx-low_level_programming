#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (filename == NULL)
	{
		return (0);
	}
	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}
	buffer = (char *) malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	read_bytes = fread(buffer, sizeof(char), letters, fp);
	if (ferror(fp))
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);
	if (write_bytes != read_bytes)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	free(buffer);
	fclose(fp);
	return (read_bytes);
}

