#include <_putchar.c>
/**
 * main - prints the alphabet, in lowercase, whithout standard library
 *
 * Return: Always 0(succes)
 */
int main(void)
{
	int codeAscii;

	for (codeAscii = 97; codeAscii <= 122; codeAscii++)
		_putchar(codeAscii);
	_putchar('\n');
	return (0);
}
