#include "main.h"

/**
 * rev_string - reverses
 * @s: char
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char p;


	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		p = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = p;
	}
}
