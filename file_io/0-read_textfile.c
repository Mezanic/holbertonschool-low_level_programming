#include "main.h"

/**
 * read_textfile - reads text file prints it to the POSIX standard output.
 * @filename: file need to be read
 * @letters: nomber of char in file
 *
 * Return: actual number of letter or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;
	char *file_buffer;
	ssize_t bytes_count, file_r, file_w;

	if (filename == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);
		if (file_des == -1)
			return (0);



	file_buffer = malloc(sizeof(char) * letters);
	if (file_buffer == NULL)
	{
		close(file_des);
		return (0);

	}

	file_r = read(file_des, file_buffer, letters);
	if (file_r == -1)
	{
		close(file_des);
		return (0);
	}

	bytes_count = write(STDOUT_FILENO, file_buffer, file_r);

	close(file_des);
	free(file_buffer);
	return (bytes_count);

}
