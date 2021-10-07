#include <stdio.h>
/**
 * main - entry point
 * Return: return the sum
 */
int main(void)
{
	int sumTotal, possMulti; /* possible multiples  */

	sumTotal = 0;
	for (possMulti = 3; possMulti < 1024; possMulti++)
	{
		if (possMulti % 3 == 0 || possMulti % 5 == 0)
			sumTotal += possMulti;
	}
	printf("%d\n", sumTotal);
	return (0);
}
