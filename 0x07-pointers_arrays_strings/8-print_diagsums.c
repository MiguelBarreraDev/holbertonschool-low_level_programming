#include "main.h"


void print_number(long int n);

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer/array
 * @size: length
 */
void print_diagsums(int *a, int size)
{
	long int pos, prinDiagSum = 0, diagSecSum = 0;
	int divPrin = 0, divSec = 0;

	divPrin = size + 1;
	divSec = size - 1;
	for (pos = 0; pos < size * size; pos++)
	{
		if (pos % divPrin == 0)
			prinDiagSum += a[pos];
		if (pos % divSec == 0 && pos % (divPrin * divSec) != 0)
			diagSecSum += a[pos];
	}
	print_number(prinDiagSum);
	_putchar(44);
	_putchar(32);
	print_number(diagSecSum);
	_putchar(10);
}

/**
 * print_number - print a integer number
 * @n: number in string
 */

void print_number(long int n)
{
	unsigned long int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
