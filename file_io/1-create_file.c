#include "main.h"

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t bytes_written;
	ssize_t bytes_read;

	if (filename == NULL)
	{
		return -1;
	}

	/* Create the file with the specific permissions */
	fd = open(filename, O_CREAT, 0600);

	if (fd == -1)
	{
		return -1;
	}

	buffer = (char *)malloc(strlen(text_content) + 1);
	if (buffer == NULL)
	{
		close(fd);
		return -1;
	}

	/* Now that we have our buffer lets read the data into the buffer  */
	bytesread = read(fd, buffer, text_content);

	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return 0;
	}

	bytes_written = write(fd, buffer, bytes_read);
	
	if (bytes_written == -1)
	{
		close(fd);
		free(buffer);
		return -1;
	}

	close(fd);
	free(buffer);
	return 0;
	
}
