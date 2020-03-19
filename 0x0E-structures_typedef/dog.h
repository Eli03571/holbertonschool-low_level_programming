<<<<<<< HEAD
#ifndef HOLBERTON
#define HOLBERTO
/ * * 
* struct dog - the composed of data types
* @name: the name
* @age: the age
* @owner: the owner
* 
* / struct dog 

{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
=======
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
>>>>>>> 8ec6ec4be00e14411c6c2a6b81a4c374f97df1bf
#endif
