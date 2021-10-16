#include "main.h"
/**
 * reverse_array - function the reverse an array
 *
 * @a: array of integers
 * @n: number
 */
void reverse_array(int *a, int n)
{
	int *arr_rev = a;
	int tmp, cont;

	cont = n / 2;
	while (cont > 0)
	{
		tmp = *arr_rev;
		*arr_rev = *(a + (n - 1));
		*(a + (n - 1)) = tmp;
		arr_rev++;
		cont--;
		n--;
	}
}
