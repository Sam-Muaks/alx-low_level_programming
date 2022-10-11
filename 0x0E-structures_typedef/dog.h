#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - creates structure for dogs information
 * @name: the dog's name
 * @age: the duration of existence of dog
 * @owner: the dogs owner name
 *
 * Description: a new type structure that contains dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
