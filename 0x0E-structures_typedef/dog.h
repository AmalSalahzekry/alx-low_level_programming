#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the following elements
 * @name: adefination of anew type char
 * @age: a defination of a new type float
 * @owner: a defination of new type char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
