#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible combinations of two digit numbers
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int digitFirst, cant, digitSecond;

	cant = 49;
	for (digitFirst = 48; digitFirst <= 57; digitFirst++)
	{
		for (digitSecond = cant ; digitSecond <= 57; digitSecond++)
		{
			if (digitFirst != 48 || digitSecond != 49)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(digitFirst);
			putchar(digitSecond);
		}
		cant++;
	}
	putchar('\n');
	return (0);
}
