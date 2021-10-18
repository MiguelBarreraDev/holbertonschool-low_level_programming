#include "main.h"
/**
 * _strstr -  function locates a substring
 *
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int pos, len = 0, i = 0;

	while (needle[len])
		len++;

	for (pos = 0; haystack[pos]; pos++)
	{
		if (*needle == haystack[pos])
		{
			i = 0;
			while (i < len)
			{
				if (needle[i] != haystack[pos + i])
					break;
				i++;
			}
			if (i == len)
				break;
		}
	}

	return (haystack + pos);
}
