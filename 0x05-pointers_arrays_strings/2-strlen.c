#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to count.
 * Return: string length. 
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
