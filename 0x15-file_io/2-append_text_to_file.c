#include "main.h"

/**
 * append_text_to_file - Will append the text at the end of a file.
 * @text_content: The string to add to the end of the file.
 * @filename: This is a pointer to the name of the file.
 *
 * Return: - -1 ,If the function fails or filename is NULL .
 *         If that file does not exist the user lacks the write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(o, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

