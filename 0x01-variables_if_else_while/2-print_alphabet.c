#include <stdio.h>
/* more headers goes there */
/**
 * main - print the alphabet
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
