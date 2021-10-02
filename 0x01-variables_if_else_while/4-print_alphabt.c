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
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
