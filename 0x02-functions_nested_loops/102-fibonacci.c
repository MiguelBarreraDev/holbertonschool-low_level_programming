#include <stdio.h>
#include <stdlib.h>
/**
 * main - printf n terms of fibonacci
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	long int n_terms, fiboCurrent, fiboPrevious, fiboResult;

	n_terms = 50;
	fiboCurrent = 1;
	fiboPrevious = 0;
	for (int cont = 0; cont < n_terms; cont++)
	{
		fiboResult = fiboPrevious + fiboCurrent;
		fiboPrevious = fiboCurrent;
		fiboCurrent = fiboResult;
		printf("%ld", fiboResult);
		if (cont == (n_terms - 1))
			break;
		printf(", ");
	}
	putchar(10);
	return (0);
}
