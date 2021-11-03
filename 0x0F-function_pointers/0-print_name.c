#include "function_pointers.h"
/**
 * print_name - function that print name
 *
 * @name: pointer to char
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
