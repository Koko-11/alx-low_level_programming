#include "main.h"

/**
 * string_toupper - lower to upper
 * @str: string to be changed
 * 
 * Return: A pointer to the new string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr = *ptr - 32;
	}
	ptr++;
	}

	return str;
}
