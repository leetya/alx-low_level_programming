#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the length of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strdup - duplicate
 * @old: str to be dup
 * Return: p
*/

char *_strdup(char *old)
{
	char *new;
	int i;

	new = malloc(_strlen(old) + 1);
	if (!new)
		return (NULL);
	for (i = 0; old[i]; i++)
		new[i] = old[i];
	new[i] = '\0';
	return (new);
}

/**
 * new_dog - func to create a new dog.
 * @name: its name
 * @age: its age;
 * @owner: its owner;
 * Return: p to new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (!name || !owner)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = _strdup(name);
	new->owner = _strdup(owner);
	new->age = age;
	if (!new->name || !new->owner)
		return (NULL);
	return (new);
}
