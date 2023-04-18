#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: is a pointer to struct type dog
 * @name: a pointer to char name
 * @age: a pointer to the float age
 * @owner: a pointer to char owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		;
	else
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
