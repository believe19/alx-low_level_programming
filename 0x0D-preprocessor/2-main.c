#include <stdio.h>

/**
 * main - main entry
 * Description: print the name of the source file
 * from which the program was compiled from
 * Return: Always 0.
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
