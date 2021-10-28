#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings.
 *
 * @s1: pointer
 * @s2: pointer
 * @n: number
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s1 = 0, len_s2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
		n = len_s2;
	}
	else
		str = malloc(sizeof(char) * (len_s1 + n + 1));

	if (str == NULL)
		return (NULL);

	strcat(str, s1);
	strncat(str, s2, n);
	strcat(str, "\0");

	return (str);
}
