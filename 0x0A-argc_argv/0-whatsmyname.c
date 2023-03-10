#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: prints the name of the program
 * @argc: number of command line arguements
 * @argv: an array of command line arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
