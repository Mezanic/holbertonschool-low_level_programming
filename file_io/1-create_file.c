#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: string to write to the file
 *
 * Return: 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t file_w = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[text_len])
		text_len++;

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if(file_des == -1)
		return (-1);

	file_w = write(file_des, text_content, text_len);

	if (file_w == -1)
		return (-1);

	close(file_des);
	return (1);
}
