#include "dog.h"

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
 * _strcpy - copies the string pointed to by src
 * @src: source
 * @dest: destination
 * Return: pointer to dest.
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	if (!dest || !src)
		return (NULL);
	len = _strlen(src);
	for (i = 0; i <= len; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - ...
 * @age: ...
 * @name: ...
 * @owner: ...
 *
 * Return: ...
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *cutie_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		cutie_dog = malloc(sizeof(dog_t));

		if (cutie_dog == NULL)
			return (NULL);

		cutie_dog->name = malloc(sizeof(char) * name_l);

		if (cutie_dog->name == NULL)
		{
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->owner = malloc(sizeof(char) * own_l);

		if (cutie_dog->owner == NULL)
		{
			free(cutie_dog->name);
			free(cutie_dog);
			return (NULL);
		}

		cutie_dog->name = _strcpy(cutie_dog->name, name);
		cutie_dog->owner = _strcpy(cutie_dog->owner, owner);
		cutie_dog->age = age;
	}

	return (cutie_dog);
}
