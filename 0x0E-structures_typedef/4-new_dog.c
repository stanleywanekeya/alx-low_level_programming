#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Initializes new dog
 * @name: pointer argument
 * @age: float argument
 * @owner: pointer argument
 * Return: value of do type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(*name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(*owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
/**
 * _strcpy - copy rom source to destination
 * @dest: pointer argument
 * @src: pointer argument
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = i = 0;

	while (src[len] != '\0')
		++len;
	for (i = 0; i < len; ++i)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);

}
