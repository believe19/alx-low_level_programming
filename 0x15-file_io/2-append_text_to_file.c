#include "main.h"

/**
 *append_text_to_file - 2-append_text_to_file at file end
 *@filename: filename
 *@text_content: text_content
 *
 *Return: 1 (success), -1 (fail)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(0, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
