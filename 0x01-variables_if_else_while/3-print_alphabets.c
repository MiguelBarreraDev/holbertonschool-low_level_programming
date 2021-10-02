#include <stdio.h>
/* more headers goes there */
/**
 * main - print alphabet in lowecase and then in uppercase
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
