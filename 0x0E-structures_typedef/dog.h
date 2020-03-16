#ifndef DOGH
#define DOGH
/**
* struct dog  - the strcture dog
* @name: first name
* @age: years
* @owner:owner
*
* Descriptión: the structure is a dog data
*/
typedef struct dog
{

	char *name;
	float age;
	char *owner;
} dog_t;


int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
