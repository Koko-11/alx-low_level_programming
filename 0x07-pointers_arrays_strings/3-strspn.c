#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: substring
 * @accept: a function
 *
 * Return: The number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *a;

	while (*s)
	{
	for (a = accept; *a; a++)
	{
	if (*s == *a)
	{
		break;
	}
	}
	if (*a == '\0')
	{
		return length;
	}
	length++;
	s++;
	}
	return length;
}
