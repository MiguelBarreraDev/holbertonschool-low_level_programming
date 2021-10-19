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
	unsigned int pos, len = 0, lenHay = 0, i = 0;

	while (needle[len])
		len++;
	while (haystack[lenHay])
		lenHay++;
	if (len == 0)
		return (haystack);

	for (pos = 0; haystack[pos] != '\0'; pos++)
	{
		if (*needle == haystack[pos])
		{
			i = 0;
			while (i < len && ((i + pos) < lenHay))
			{
				if (needle[i] != haystack[pos + i])
					break;
				i++;
			}
			if (i == len)
				return (haystack + pos);
		}
	}

	return ('\0');
}
