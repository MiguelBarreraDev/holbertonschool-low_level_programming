#include <stdio.h>
#include <stdlib.h>

/*
 + main- Entry point
 *
 * Return: Always 0(succes)
 */

int main(void)
{
	srand(time(NULL));
	int n = rand();

	if (n < 0)
		printf("%i is negative\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is positive\n", n);

	return (0);
}
