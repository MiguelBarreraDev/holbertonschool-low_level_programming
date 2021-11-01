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

	if (n == NULL)
		return (NULL);

	n->name = malloc(strlen(name) + 1);
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}
	n->owner = malloc(strlen(owner) + 1);
	if (n->owner == NULL)
	{
		free(n->name);
		free(n);
		return (NULL);
	}

	strcpy(n->name, name);
	n->age = age;
	strcpy(n->owner, owner);

	return (n);
}
