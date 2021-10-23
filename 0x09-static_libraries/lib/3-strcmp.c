#include "main.h"
#include <stdio.h>
/**
 * _strcmp - function
 *
 * @s1: pointer
 * @s2: pointer
 *
 * Return: number;
 */
int _strcmp(char *s1, char *s2)
{
	int checkComparation = 0;

	while (1 == 1)
	{
		if (*s1 == *s2)
		{
			checkComparation = 0;
		}
		else if (*s1 > *s2)
		{
			checkComparation = *s1 - *s2;
			break;
		}
		else
		{
			checkComparation = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
		if (*s1 == '\0' || *s2 == '\0')
			break;
	}
	return (checkComparation);
}
