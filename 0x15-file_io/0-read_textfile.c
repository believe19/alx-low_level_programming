#include "main.h"

/**
 * read_textfile -  a function that reads a text file
 * prints it to the POSIX standard output
 * @filename:  pointers
 * @letters: size of letters
 *
 * Return: number of letters it could print or write or 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(o);
	return (w);
}
