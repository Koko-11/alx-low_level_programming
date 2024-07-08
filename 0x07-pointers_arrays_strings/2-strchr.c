#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 *
 * Return: A pointer to s or NULL 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
		return s;
	}
		s++;
	}
	if (c == '\0')
	{
		return s;
	}
	return NULL;
}
