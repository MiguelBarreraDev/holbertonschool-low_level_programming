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
	unsigned int len_s1 = 0, len_s2 = 0, index, size = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
	{
		n = len_s2;
	}

	size = len_s1 + n;
	str = malloc(size);

	if (str == NULL)
		return (NULL);

	for (index = 0; index < len_s1; index++)
	{
		*(str + index) = *(s1 + index);
	}

	for (index = 0; index < n; index++)
	{
		*(str + index + len_s1) = *(s2 + index);
	}
	*(str + len_s1 + n) = '\0';

	return (str);
}
