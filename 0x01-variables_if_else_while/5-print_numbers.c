#include <stdio.h>
/**
 * main - pritns all single digit numbers of base 10
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int cont;

	for (cont = 0; cont < 10; cont++)
	{
		printf("%d", cont);
	}
	putchar('\n');
	return (0);
}
