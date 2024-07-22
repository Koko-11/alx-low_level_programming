#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Pointer to the newly created dog, or NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy, *owner_copy;
	
	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		name_copy = (char *)malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(d);
		return (NULL);
	}
		strcpy(name_copy, name);
		d->name = name_copy;
	}
	else
	{
		d->name = NULL;
	}

	d->age = age;

	if (owner != NULL)
	{
		owner_copy = (char *)malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
		strcpy(owner_copy, owner);
		d->owner = owner_copy;
	}
	else
	{
		d->owner = NULL;
	}

	return (d);
}
