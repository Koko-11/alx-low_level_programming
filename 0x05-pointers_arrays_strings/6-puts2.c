#include "main.h"

/**
 * puts2 - skips
 * @str: char
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
