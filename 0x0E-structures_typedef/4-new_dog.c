#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 *
 * @name: pointer to char
 * @age: pointer to age
 * @owner: pointer to char
 *
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n = malloc(sizeof(struct dog));

	n->name = malloc(strlen(name));
	n->owner = malloc(strlen(owner));

	strcpy(n->name, name);
	n->age = age;
	strcpy(n->owner, owner);

	return (n);
}
