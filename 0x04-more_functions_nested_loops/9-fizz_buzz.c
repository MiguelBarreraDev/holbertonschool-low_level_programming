#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
			printf("%s", "Fizz");
		else if (num % 5 == 0 && num % 3 != 0)
			printf("%s", "Buzz");
		else if (num % 15 == 0)
			printf("%s", "FizzBuzz");
		else
			printf("%d", num);
		if (num < 100)
			putchar(' ');
	}
	putchar(10);
	return (0);
}
