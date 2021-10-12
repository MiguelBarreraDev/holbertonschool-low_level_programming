#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: pointer to integer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int pos;

	for (pos = 0; pos < n; pos++)
	{
		printf("%i", *(a++));
		if (pos < (n - 1))
			printf(", ");
	}
	printf("\n");
}
