#include "main.h"

/**
 * _puts - prints
 * @str: string
 * Returns: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
