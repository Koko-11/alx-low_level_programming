#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the size of memory to add
 *
 * Return: a pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	{
	while (s1[len1] != '\0')
		len1++;
	}

	if (s2 != NULL)
	{
	while (s2[len2] != '\0')
		len2++;
	}
	
	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
