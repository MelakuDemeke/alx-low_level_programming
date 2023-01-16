#include "<stdlib.h>"
#include "dog.h"


/**
* free_dog - frees the struct of dog
*
* @d: pointer to be freed
*
* Return: noting
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}   
}
