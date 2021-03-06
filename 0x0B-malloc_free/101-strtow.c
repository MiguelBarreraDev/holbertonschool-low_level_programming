#include "main.h"
#include <stdlib.h>
char *replace_space(char *);
int number_words(char *);

/**
 * strtow - function that splits a string into words
 *
 * @str: pointer to string
 *
 * Return: pointer to pointer
 */
char **strtow(char *str)
{
	int pos = 0, l = 0, row = 0, n_words = 0, len_word = 0;
	char **collection, *f_str = str;

	if (str == NULL)
		return ('\0');

	n_words = number_words(f_str);
	if (n_words == 0)
		return ('\0');
	collection = malloc(sizeof(char *) * (n_words + 1));
	if (collection == NULL)
	{
		free(collection);
		return ('\0');
	}
	for (row = 0; row < n_words; row++)
	{
		if (*f_str == ' ')
			f_str = replace_space(f_str);
		len_word = 0;
		pos = 0;
		while (*(f_str + pos) != ' ' && *(f_str + pos))
		{
			len_word++;
			pos++;
		}

		collection[row] = malloc(sizeof(char) * (len_word + 1));

		if (collection[row] == NULL)
		{
			while (row >= 0)
			{
				free(collection[row]);
				row--;
			}
			free(collection);
			return (NULL);
		}

		for (l = 0; l < len_word; l++)
		{
			collection[row][l] = *f_str;
			f_str++;
		}
		collection[row][l] = '\0';
	}

	collection[row] = NULL;
	return (collection);
}
/**
 * number_words - function that calculates the number of words
 *
 * @str: pointer to string
 *
 * Return: number of words
 */
int number_words(char *str)
{
	unsigned int pos, n = 0;

	for (pos = 0; *(str + pos); pos++)
	{
		if (pos > 0)
		{
			if (str[pos] == ' ')
				continue;
			else if (pos > 0 && str[pos - 1] != ' ')
				continue;
			n++;
		}
		else
		{
			if (str[pos] != ' ')
				n++;
		}
	}
	return (n);
}
/**
 * replace_space - function that replaces whitespace at the string
 *
 * @str: pointer to string
 *
 * Return: formatted string
 */
char *replace_space(char *str)
{
	if (*str != ' ')
		return (str);
	return (replace_space(str + 1));
}
