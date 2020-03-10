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
struct dog
{

	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
