#include <stdio.h>
#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: A pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	if (*needle == '\0')
	{
		return haystack;
	}

	while (*haystack)
	{
		i = haystack;
		j = needle;

	while (*j && *i == *j)
	{
		i++;
		j++;
	}

	if (*j == '\0')
	{
		return haystack;
	}
	haystack++;
	}
	return NULL;
}
