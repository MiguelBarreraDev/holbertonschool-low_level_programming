#include "main.h"
/**
 * print_diagonal - function about to print diagonal
 * @n: Times of repeat
 */
void print_diagonal(int n)
{
    int i;
    int a = n - 1;

    if (n > 0)
    {
        while (n--)
        {
            for (i = n; i < a; i++)
            {
               _putchar(' ');
            }
            _putchar(92); /* back slash */
            _putchar(10); /* salto de linea */
        }
    }
    else
    _putchar(10);
}
