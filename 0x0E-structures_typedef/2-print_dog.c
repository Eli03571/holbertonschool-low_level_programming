#include <stdio.h>
#include "dog.h"
/**
* print_dog - the strcture dog
* @d:the pointer
* Descriptión: the structure is a dog data
*/
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	printf("name: ");
	if ((*d).name == NULL)
		printf("(nil)");
	else
		printf((*d).name);
	printf("\n");

	printf("age: ");
	if ((*d).age == '\0')
		printf("nil");
	else
		printf("%f", (*d).age);
	printf("\n");

	printf("owner: ");
	if ((*d).owner == NULL)
		printf("nil");
	else
		printf((*d).owner);
	printf("\n");

}
