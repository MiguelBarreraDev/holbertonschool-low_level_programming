#include <_putchar.c>
/**
 * main - prints 10 times the alphabet, in lowercase, without standard library
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int codeAscii, cont;

	for (cont = 0; cont < 10; cont++)
	{
		for (codeAscii = 97; codeAscii <= 122; codeAscii++)
			_putchar(codeAscii);
		_putchar('\n');
	}
	return (0);
}
