#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - indentify the last digit
 *
 * Return: Always
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, lastDig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDig = n % 10;
	if (lastDig > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDig);
	else if (lastDig == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDig);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDig);
	return (0);
}
