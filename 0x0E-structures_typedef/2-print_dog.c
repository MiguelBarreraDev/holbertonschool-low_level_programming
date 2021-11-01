#include "dog.h"
#include <stdio.h>

#define isNULL(value) ((value == NULL) ? "(nil)" : value)
/**
 * print_dog -  function that prints a struct dog
 *
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", isNULL(d->name));
	if (!(d->age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);
	printf("Owner: %s\n", isNULL(d->owner));
}
