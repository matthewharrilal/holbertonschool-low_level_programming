#include "dog.h"

#include <stdio.h>
#include <stdlib.h>

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
