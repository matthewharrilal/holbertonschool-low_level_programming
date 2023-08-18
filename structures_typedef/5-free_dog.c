#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
	free(dog->name);
	free(dog->owner);
	free(dog->age);
	free(d);
}
