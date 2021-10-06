#include "main.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: is a integer number
 */
void print_to_98(int n)
{
	int cont;

	if (n > 98)
	{
		for (cont = n; cont >= 98; cont--)
		{
			printf("%d", cont);
			if (cont == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		for (cont = n; cont <= 98; cont++)
		{
			printf("%d", cont);
			if (cont == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
