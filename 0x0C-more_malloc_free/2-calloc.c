#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _calloc -  function
*@nmemb: array
*@size: size of array
*Return: return array
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
str = malloc(nmemb * size);
if (str == 0)
{
return (NULL);
}
for (i = 0; i < nmemb * size; i++)
{
str[i] = 0;
}
return (str);
}
