#include <stdio.h>
#include <stdlib.h>
/**
 * main - printf n terms of fibonacci
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	long int n_terms, fiboCurrent, fiboPrevious, fiboResult, cont, sumTotal;

	n_terms = 4000000;
	fiboCurrent = 1;
	fiboPrevious = 0;
	cont = 0;
	sumTotal = 0;
	while (cont <= n_terms)
	{
		fiboResult = fiboPrevious + fiboCurrent;
		fiboPrevious = fiboCurrent;
		fiboCurrent = fiboResult;
		if (fiboResult % 2 == 0)
			sumTotal += fiboResult;
		cont++;
	}
	printf("%ld", sumTotal);
	putchar(10);
	return (0);
}
