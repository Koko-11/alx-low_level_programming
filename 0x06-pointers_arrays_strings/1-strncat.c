#include "main.h"

/**
 * _strncat - Concatenates two strings 
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 * 
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}

	*ptr = '\0';

	return dest;
}
