#include <stdio.h>
/* more headers goes there */
/**
 * main - prints all possible combinations of three digit numbers
 *
 * Return: Always 0(succes)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int digitFirst, cantDS, digitSecond, cantDT, digitThird;

	for (digitFirst = 48; digitFirst <= 57; digitFirst++)
	{
		cantDS = digitFirst + 1;
		cantDT = digitFirst + 2;
		for (digitSecond = cantDS ; digitSecond <= 57; digitSecond++)
		{
			for (digitThird = cantDT; digitThird <= 57; digitThird++)
			{
				if (digitFirst != 48 || digitSecond != 49 || digitThird != 50)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(digitFirst);
				putchar(digitSecond);
				putchar(digitThird);
			}
			cantDT++;
		}
	}
	putchar('\n');
	return (0);
}
