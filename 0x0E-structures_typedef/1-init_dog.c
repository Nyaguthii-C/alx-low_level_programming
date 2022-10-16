#include "dog.h"

/**
* init_dog - initializes the dog structure
* @d: pointer to structure name
* @name: character pointer
* @age:variable of type float
* @owner: character pointer to owner;
*
* Return: Always 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
