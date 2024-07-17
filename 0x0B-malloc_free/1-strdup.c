#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to dupe of str
 * @str: the string to be duplicated
 *
 * Return: pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);
	
	for (length = 0; str[length] != '\0'; length++)
		;

	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	duplicate[i] = str[i];
	duplicate[length] = '\0';

	return (duplicate);
}
