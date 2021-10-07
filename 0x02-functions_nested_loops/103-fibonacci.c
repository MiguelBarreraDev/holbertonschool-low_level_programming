#include <stdio.h>
#include <stdlib.h>
/**
 * main - printf n terms of fibonacci
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int  max_value, fiboCurrent, fiboPrevious, fiboResult, cont, sumTotal;

	max_value = 4000000;
	fiboCurrent = 1;
	fiboPrevious = 0;
	cont = 0;
	sumTotal = 0;
	while (fiboResult < max_value)
	{
		fiboResult = fiboPrevious + fiboCurrent;
		fiboPrevious = fiboCurrent;
		fiboCurrent = fiboResult;
		if (fiboResult % 2 == 0)
			sumTotal += fiboResult;
		cont++;
	}
	printf("%d", sumTotal);
	putchar(10);
	return (0);
}
