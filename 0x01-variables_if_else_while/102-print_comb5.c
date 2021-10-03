#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Aways 0(succes)
 */
int main(void)
{
	int d1, d2, d3, d4;

	for (d1 = 48; d1 <= 57; d1++)
	{
		for (d2 = 48; d2 <= 57; d2++)
		{
			for (d3 = 48; d3 <= 57; d3++)
			{
				for (d4 = 48 ; d4 <= 57; d4++)
				{
					/*regla de exclusion para numero de 3 y 4 digitos respectivamente*/
					if (
						(d2 > d4 && d3 == 48) ||
						(d1 > d3 || (d2 >= d4 && d1 + d2 + d3 + d4 != 48 * 4 + 1)))
						continue;
					/*regla para el uso de comas y exclusión del primer numbero(00 00)*/
					if (d1 + d2 + d3 + d4 > (4 * 48 + 1) || d3 > 48)
					{
						putchar(',');
						putchar(' ');
					}
					else if (d1 + d2 + d3 + d4 == 48 * 4)
					{
						continue;
					}
					/* imprimiendo digitos filtrados en la salida estandar*/
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
