#include "main.h"
/**
 * _strlen - Find the length of a string
 *
 * @s: pointer to char
 *
 * Return:  length of a string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*(s++))
	{
		cont++;
	}
	return (cont);
}
