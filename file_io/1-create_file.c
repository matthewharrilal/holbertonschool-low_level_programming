#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	char buffer;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return -1;
	}

	/* Create the file with the specific permissions */
	fd = open(filename, O_CREAT, 600);

	if (fd == -1)
	{
		return -1;
	}

	buffer = malloc(sizeof(char *));
	if (buffer == NULL)
	{
		close(fd);
		return -1;
	}

	bytes_written = write(filename, buffer, strlen(text_content));
	
	if (bytes_written == -1)
	{
		close(fd);
		free(buffer);
		return -1;
	}


	return 0;
	
}