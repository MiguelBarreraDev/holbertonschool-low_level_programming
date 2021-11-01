#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to struct
 * @name: pointer to char
 * @age: pointer to float
 * @owner: pointer to char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
