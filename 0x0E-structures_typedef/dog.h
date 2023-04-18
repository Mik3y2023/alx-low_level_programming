#ifndef DOG
#define DOG

/**
 * struct dog - structure for a dog
 * @name: name element
 * @age: age element
 * @owner: owner element
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
