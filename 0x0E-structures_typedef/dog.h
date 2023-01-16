#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog Struct
*
* @name: name of dog, type char
* @age: age of dog, type float
* @owner: name of owner, type char
*
* Description: create dog type with name, age, owner
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* Struct dog */
