#include "dog.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogObject;
	char *nameCopy;
	char *ownerCopy;

	dogObject = (dog_t *)malloc(sizeof(dog_t));

	nameCopy = strdup(name);
	ownerCopy = strdup(owner);

	if (dogObject == NULL)
	{
		return NULL;
	}

	dogObject->name = nameCopy;
	dogObject->age = age;
	dogObject ->owner = ownerCopy;

	return dogObject;
}
