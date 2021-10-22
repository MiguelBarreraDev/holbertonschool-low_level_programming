#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 *
 * @argc: contains the number of arguments
 * @argv: argument vector
 *
 *Return: Always 0(succes)
 */
int main(__attribute__((unused))int argc, char *argv[])
{
	while (*argv)
		printf("%s\n", (*argv++));
	return (0);
}

