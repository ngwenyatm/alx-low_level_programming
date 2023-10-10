#include <stdlib.h>
#include "dog.h"

	/**
	 * free_dog - frees memory allocated for dog
	 * @d: struct memory address to free
	 */
	void free_dog(dog_t *d)
	{
		if (d)
		{
			free(d);
			free(d->name);
			free(d->owner);
			
		}
	}
