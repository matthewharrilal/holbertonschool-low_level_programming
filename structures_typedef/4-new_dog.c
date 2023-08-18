#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogObject;

	dogObject = (dog_t *)malloc(sizeof(dog_t));

	if (dogObject == NULL)
	{
		return NULL;
	}

	dogObject->name = name;
	dogObject->age = age;
	dogObject ->owner = owner;

	return dogObject;
}
