#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: a pointer to a new string, or NULL
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		len++;
	}
	len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
	return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		str[k++] = av[i][j];
	}
	str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
