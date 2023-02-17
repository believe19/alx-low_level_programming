#include <stdio.h>
/**
 * main - main access
 *
 * Return: 0 always
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
