#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialize dog Struct
 *
 * @d: structure
 * @name: name of dog, type char
 * @age: age of dog, type float
 * @owner: name of owner, type char
 *
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;

	}
}
