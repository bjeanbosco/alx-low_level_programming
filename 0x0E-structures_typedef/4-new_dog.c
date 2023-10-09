#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _copystr - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_copystr(char *str)
{
int j, i;
char *k;

if (str == NULL)
return (0);

j = 0;
while (*(str + j))
j++;

k = malloc(sizeof(char) * j + 1);

if (k == 0)
return (0);

for (i = 0; i <= j; i++)
{
*(k + i) = *(str + i);
}
return (k);
}


/**
* *new_dog - function
* @name: name of dog
* @age: age of the dog
* @owner: the dog owner
* Return: on success 1
**/

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog;
new_dog = malloc(sizeof(struct dog));

if (new_dog == 0 || name == 0 || owner == 0)
return (0);

new_dog->name = _copystr(name);
if (new_dog->name == 0)
{
free(new_dog);
return (0);
}
new_dog->age = age;
new_dog->owner = _copystr(owner);
if (new_dog->owner == 0)
{
free(new_dog);
free(new_dog->name);
return (0);
}
return (new_dog);
}
