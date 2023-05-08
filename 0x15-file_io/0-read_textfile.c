#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	return (0);

	FILE *file = fopen(filename, "r");
	if (file == NULL)
	return (0);

	char *buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL) 
	{	
	fclose(file);
 	return (0);
	}

	ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);
	if (bytesRead <= 0)
	{
	fclose(file);
	free(buffer);
	return (0);
	}
	buffer[bytesRead] = '\0';

	ssize_t bytesWritten = fwrite(buffer, sizeof(char), bytesRead, stdout);
	if (bytesWritten != bytesRead) 
	{
	fclose(file);
 	free(buffer);
	return (0);
	}

	fclose(file);
	free(buffer);
	return (bytesRead);
}
