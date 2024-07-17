#include <stdlib.h>
#include "main.h"

/**
 * count_words - counts the number of words in a string
 * @str: the string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
	if (*str == ' ')
	{
		in_word = 0;
	}
	else if (!in_word)
	{
		in_word = 1;
		count++;
	}
	str++;
	}

	return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, len, word_count, start;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i])
	{
	while (str[i] == ' ')
		i++;

	if (str[i])
	{
		start = i;
	while (str[i] && str[i] != ' ')
		i++;
	len = i - start;

	words[j] = malloc((len + 1) * sizeof(char));
	if (words[j] == NULL)
	{
	while (j > 0)
	{
		j--;
		free(words[j]);
	}
		free(words);
		return (NULL);
	}

	for (k = 0; k < len; k++)
		words[j][k] = str[start + k];
	words[j][k] = '\0';
		j++;
	}
	}
	words[j] = NULL;

	return (words);
}
