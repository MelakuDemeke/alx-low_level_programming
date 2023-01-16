#ifndef DOG_H
#define DOG_H

/**
* struct dog - dog Struct
* @name: name of dog, type char
* @age: age of dog, type float
* @owner: name of owner, type char
*
* Description: create dog type with name, age, owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* Struct dog */
