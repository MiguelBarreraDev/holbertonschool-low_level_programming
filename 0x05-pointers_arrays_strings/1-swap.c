#include "main.h"
/**
 * swap_int - swap value of the pointers
 *
 * @a: pointer to int
 * @b: pointer to int
 */
void swap_int(int *a, int *b)
{
	int save = *a;

	*a = *b;
	*b = save;
}
