#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @b: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *b)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(b + count) >= 97 && *(b + count) <= 122)
		*(b + count) = *(b + count) - 32;
	count++;
	while (*(b + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(b + count) == sep_words[i])
			{
				if ((*(b + (count + 1)) >= 97) && (*(b + (count + 1)) <= 122))
					*(b + (count + 1)) = *(b + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (b);
}
