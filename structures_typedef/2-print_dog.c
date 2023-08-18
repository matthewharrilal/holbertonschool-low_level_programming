#include "dog.h"

#include <stdio.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf(d->name != NULL ? "Name: %s\n": "Name: (nil)", d->name);
	printf(d->age != 0 ? "Age: %.2f\n" : "Age: (nil)", d->age);
	printf(d->owner != NULL ? "Owner: %s": "Owner: (nil)", d->owner);
}
