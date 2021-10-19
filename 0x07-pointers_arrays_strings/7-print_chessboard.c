#include "main.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer to pointer
 */
void print_chessboard(char (*a)[8])
{
	int len = 0, row, col;

	while (*(a + len)[0])
		len++;
	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar(10);
	}
}
