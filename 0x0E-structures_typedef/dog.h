#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog rep
 * @name: the name of the dog
 * @age: the age ///
 * @owner: the owner ///
 * Description: this struct represent a dog (fake oop xD)
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
