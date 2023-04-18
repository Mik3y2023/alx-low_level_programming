#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 * @name: pointer to name
 * @age: pointer to age
 * @owner: pointer to owner
 *
 * Return: pointer to new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a = 0;
	int b = 0;
	int c;
	dog_t *doggy;

	while (name[a] != '\0')
		a++;
	while (owner[b] != '\0')
		b++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		free(doggy);
		return (NULL);
	}
	(*doggy).name = malloc(a * sizeof((*doggy).name));
	if ((*doggy).name == NULL)
	{
		free(doggy->name);
		return (NULL);
	}
	for (c = 0; c <= a; c++)
		doggy->name[c] = name[c];
	doggy->age = age;
	doggy->owner = malloc(b * sizeof(doggy->owner));
	if (doggy->owner == NULL)
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (c = 0; c <= b; c++)
		doggy->owner[c] = owner[c];
	return (doggy);
}
