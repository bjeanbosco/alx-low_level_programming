#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include"main.h"
/**
* *create_array - function
*@size: size of array
*@c: array of character
*Return: if true return word else NULL
**/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *word;

if (size  == 0)
return (NULL);

word = malloc(size * sizeof(*word));
if (word == NULL)
	return (NULL);
for (i = 0; i < size; i++)
word[i] = c;
return (word);
}
