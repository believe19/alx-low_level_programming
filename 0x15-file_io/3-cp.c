#include "main.h"

/**
  * main - copy one file to another.
  * @argc: argument count.
  * @argv: argument vector.
  *
  * Return: 0.
  */

int main(int argc, char *argv[])
{
	int o, r, w;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	o =  open(argv[1], O_RDONLY, 0);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	r = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (r == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((w = read(o, buf, 1024)) > 0)
	{
		if (write(r, buf, w) != w)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (w  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(o) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", o), exit(100);
	}
	if (close(r) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", r), exit(100);
	}
	return (0);
}
