#include <stdio.h>
#include "dog.h"
#include <string.h>
/**
*init_dog - function
*@d: sructure
*@name: name of dog
*@age: age of dog
*@owner: the dog's owner
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
