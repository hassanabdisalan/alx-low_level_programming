#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - A new type describing a dog.
 * @name: The name of the dog, type = char *
 * @age: The age of the dog, type = float
 * @owner: The owner of the dog, type = char *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


/* Function prototpe*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
