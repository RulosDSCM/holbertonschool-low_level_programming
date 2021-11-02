#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - creates a new structure
 *
 * @name: 1st item
 * @age: 2nd item
 * @owner: 3rd item
 * Return: New structure / Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_new_dog;
	char *ptr1, *ptr2;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	{
		return (NULL);
	}
	if (name != NULL)
	{
		ptr1 = malloc(sizeof(char) * strlen(name));
		if (ptr1 == NULL)
		{
			free(create_new_dog);
			return (NULL);
		}
		create_new_dog->name = strcpy(ptr1, name);
	}
	else
		create_new_dog->name = NULL;
	if (owner != NULL)
	{
		ptr2 = malloc(sizeof(char) * strlen(owner));
		if (ptr2 == NULL)
		{
			free(ptr1);
			free(create_new_dog);
			return (NULL);
		}
		create_new_dog->owner = strcpy(ptr2, owner);
	}
	else
	{
		create_new_dog->owner = NULL;
	}
	create_new_dog->age = age;

	return (create_new_dog);
}
