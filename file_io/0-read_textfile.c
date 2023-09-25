#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* The open method returns a file descriptor  */
	char *buffer; /* In charge of holding the data stored  */
	ssize_t bytesread;
	ssize_t byteswritten;

	if (filename == NULL)
	{
		return 0;
	}

	/* First step is we need to open the file that is passed into this method  */

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		/* Error opening the file */
		return 0;
	}

	/* Now lets allocate a buffer that will hold the stored data  */
	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}

	/* Now that we have our buffer lets read the data into the buffer  */
	bytesread = read(fd, buffer, letters);

	if (bytesread == -1)
	{
		free(buffer);
		close(fd);
		return 0;
	}

	byteswritten = write(STDOUT_FILENO, buffer, bytesread);

	if (byteswritten == -1 || bytesread != byteswritten)
	{
		free(buffer);
		close(fd);
		return 0;
	}

	free(buffer);
	close(fd);
	return byteswritten;
}
