#include "main.h"

/**
 *  _strlen - length
 *  @s: int
 *  Return: mi o mo
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
