#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
*_strdup - function
*@str: to be duplicated
*Return: return word if error NULL
**/

char *_strdup(char *str)
{
char *word;
int k, i;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
word = malloc(i * sizeof(*word) + 1);
if (word == NULL)
return (NULL);
for (k = 0; k < i; k++)
word[k] = str[k];
word[k] = '\0';
return (word);
}
