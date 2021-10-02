#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int digit;

	for (digit = 48; digit <= 57; digit++)
	{
		if (digit != 48)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
