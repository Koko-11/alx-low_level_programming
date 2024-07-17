#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: concatenated strings or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int x, y, length1 = 0, length2 = 0;

	if (s1 != NULL)
	{
	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	}

	if (s2 != NULL)
	{
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;
	}

	concat = malloc((length1 + length2 + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < length1; x++)
	{
		concat[x] = s1[x];
	}

	for (y = 0; y < length2; y++)
	{
		concat[length1 + y] = s2[y];
	}

	concat[length1 + length2] = '\0';

	return (concat);
}
