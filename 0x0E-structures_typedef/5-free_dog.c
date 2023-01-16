#include "dog.h"
#include "<stdlib.h>"

/**
* free_dog - frees the struct of dog
*
* @d: pointer to be freed
*
* Return: noting
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}   
}
