#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 * 
 * Return: pointer to the encoded string.
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char leet_chars[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (str[i] == letters[j])
	{
		str[i] = leet_chars[j];
		break;
	}
	}
	}

	return str;
}
