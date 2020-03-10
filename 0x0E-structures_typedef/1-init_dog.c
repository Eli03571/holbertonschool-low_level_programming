#include "dog.h"
/**
* init_dog  - the strcture dog
* @name: first name
* @age: years
* @owner:owner
* @d: the pointer
* Descriptión: the structure is a dog data
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
