#include "main.h"

/* 
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return -1;
	}

	/ Create the file with the specific permissions /
	fd = open(filename, O_CREAT | O_WRONLY, 0600);

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

	bytes_written = write(fd, buffer, strlen(text_content));
	
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
*/

int create_file(const char *filename, char *text_content)
{
    int fd;
    ssize_t bytes_written;

    if (filename == NULL)
    {
        return -1;
    }

    /* Create the file with the specific permissions and open it for writing */
    fd = open(filename, O_CREAT | O_WRONLY, 0600);

    if (fd == -1)
    {
        return -1;
    }

    size_t text_length = strlen(text_content);
    bytes_written = write(fd, text_content, text_length);

    if (bytes_written != text_length)
    {
        close(fd);
        return -1;
    }

    close(fd);
    return 0;
}
