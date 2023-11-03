#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	return (0);

	file = fopen(filename, "r");
	if (file == NULL)
	return (0);

	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
	fclose(file);
	return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
	fclose(file);
	free(buffer);
	return (0);
	}
	buffer[bytesRead] = '\0';

	bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten != bytesRead || fflush(stdout) == EOF)
	{
	fclose(file);
	free(buffer);
	return (0);
	}
	fclose(file);
	free(buffer);
	return (bytesRead);
}
