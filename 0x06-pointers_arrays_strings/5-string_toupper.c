#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @b: input string.
 * Return: the pointer to dest.
 */

char *string_toupper(char *b)
{
	int count = 0;

	while (*(b + count) != '\0')
	{
		if ((*(b + count) >= 97) && (*(b + count) <= 122))
			*(b + count) = *(b + count) - 32;
		count++;
	}

	return (b);
}

