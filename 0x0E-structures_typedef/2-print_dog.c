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
	printf("Name: ");
	if ((*d).name == NULL)
		printf("(nil)");
	else
		printf((*d).name);
	printf("\n");

	printf("Age: ");
	if ((*d).age == '\0')
		printf("nil");
	else
		printf("%f", (*d).age);
	printf("\n");

	printf("Owner: ");
	if ((*d).owner == NULL)
		printf("nil");
	else
		printf((*d).owner);
	printf("\n");

}
