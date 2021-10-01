#include <stdlib.h>
#include <time.h>
#include <sdtio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if(lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (lastDigito == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
