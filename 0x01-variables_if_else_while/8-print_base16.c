#include <stdio.h>
/* more headers goes there */
/**
 * main - print the numbers in hexadecimal
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		putchar(number);
	for (number = 97; number <= 102; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
