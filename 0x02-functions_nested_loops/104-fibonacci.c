#include <stdio.h>
/**
 * main - printf the fiorst 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0(succes)
 */
int main(void)
{
	unsigned long int n_terms, fiboCurrent, fiboPrevious, fiboResult, cont;

	n_terms = 98;
	fiboCurrent = 1;
	fiboPrevious = 0;
	cont = 0;
	while (cont < n_terms)
	{
		fiboResult = fiboPrevious + fiboCurrent;
		fiboPrevious = fiboCurrent;
		fiboCurrent = fiboResult;
		printf("%lu", fiboResult);
		if (cont == (n_terms - 1))
			break;
		printf(", ");
		cont++;
	}
	putchar(10);
	return (0);
}
