#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: a string
 *
 * Return: strlen
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks string for palindrome.
 * @s: The string
 * @x: starts checking the string 
 * @z: finishes
 *
 * Return: 1 if string is palindrome else 0
 */
int checker(char *s, int x, int z)
{
	if (x >= z)
	{
		return (1);
	}
	if (s[x] != s[z])
	{
		return (0);
	}
	return (checker (s, x + 1, z - 1));
}

/**
 * is_palindrome - is it palindrome?
 * @s: The string
 *
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
