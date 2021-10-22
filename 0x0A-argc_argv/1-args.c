#include "main.h"
#include <stdio.h>
/**
 * main- prints the number of arguments passed into it.
 *
 * @argc: contains the number of arguments
 * @argv: argument vector
 *
 *Return: Always 0(succes)
 */
int main(int argc,__attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

