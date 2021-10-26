#include "main.h"
#include <string.h>
#include <stdlib.h>
char *replace_space(char *, int);
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
	unsigned int pos = 0, posX = 0, row = 0, n_words = 0, len_word = 0;
	char **collection, *f_str;

	if (str == 0)
		return ('\0');

	n_words = number_words(str);
	f_str = replace_space(str, n_words);

	if (strlen(f_str) == 0)
		return ('\0');

	collection = (char **)malloc(sizeof(char *) * n_words + 1);
	if (collection == 0)
	{
		free(collection);
		return ('\0');
	}
	for (row = 0; row < n_words; row++)
	{
		len_word = 0;
		while (*(f_str + pos) != ' ' && pos < strlen(f_str))
		{
			len_word++;
			pos++;
		}
		pos++;
		collection[row] = (char *)malloc((sizeof(char) * len_word) + 1);
		if (collection[row] == 0)
		{
			for (row = 0; row < n_words; row++)
				free(collection[row]);
			free(collection);
		}
	}
	/* assign values to array */
	pos = 0;
	for (row = 0; row < n_words; row++)
	{
		while (*(f_str + pos) != ' ' && pos < strlen(f_str))
		{
			collection[row][posX] = f_str[pos];
			pos++;
			posX++;
		}
		collection[row][posX] = '\0';
		posX = 0;
		pos++;
	};
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

	for (pos = 0; pos < strlen(str); pos++)
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
 * @n_words: number of words
 *
 * Return: formatted string
 */
char *replace_space(char *str, int n_words)
{
	unsigned int pos, size = 0, posX = 0;
	char *new_str;

	for (pos = 0; pos < strlen(str); pos++)
	{
		if (str[pos] != ' ')
			size++;
	}
	size += n_words;
	new_str = malloc(sizeof(char) * size);

	for (pos = 0; pos < strlen(str); pos++)
	{
		if (str[pos] != ' ')
			*(new_str + posX++) = str[pos];
		if (str[pos] != ' ' && str[pos + 1] == ' ')
			*(new_str + posX++) = ' ';

	}
	*(new_str + posX - 1) = '\0';
	return (new_str);
}
