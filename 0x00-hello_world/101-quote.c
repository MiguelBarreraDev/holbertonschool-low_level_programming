#include <unistd.h>
/**
  * main - Entry point
  *
  * Return: Always 1(succes)
  */
int main(void)
{
	int sizeStr=strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n");
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n\n", sizeStr);
	return (1);
}
