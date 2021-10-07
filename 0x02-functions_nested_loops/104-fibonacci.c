#include <stdio.h>
/**
 * main - printf the fiorst 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: Always 0(succes)
 */
int main(void)
{
	unsigned long fiboCurrent, fiboPrevious, fiboResult;
	int cont;

	fiboCurrent = 2;
	fiboPrevious = 1;
	cont = 3;
	printf("1, 2, ");
	while (cont <= 98)
	{
		fiboResult = fiboPrevious + fiboCurrent;
		fiboPrevious = fiboCurrent;
		fiboCurrent = fiboResult;
		printf("%lu", fiboResult);
		if (cont < 98)
			printf(", ");
		cont++;
	}
	putchar(10);
	return (0);
}
