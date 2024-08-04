#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text need to be printed
 *
 * Return: 1 or -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int text_len = 0, file_w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	else
       	{

		while (text_content[text_len])
			text_len++;
	}
	file_des = open(filename, O_WRONLY | O_APPEND);

	if (file_des == -1)
		return (-1);

	file_w = write(file_des, text_content, text_len);

	if (file_w == -1)
		return (-1);

	close(file_des);
	return (1);
}
