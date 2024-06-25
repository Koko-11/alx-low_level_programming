#include "main.h"

/**
 * _islower - checks for lowercase
 *@c: character to be checked
 * Return: Returns 1 if c is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
