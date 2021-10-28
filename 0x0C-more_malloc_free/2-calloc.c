#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for
 * an array, using malloc.
 *
 * @nmemb: number;
 * @size: number;
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int pos;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (pos = 0; pos < nmemb; pos++)
		*(arr + pos) = 0;

	return (arr);
}
