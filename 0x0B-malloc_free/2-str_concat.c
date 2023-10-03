#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - function
*@s1: string one
*@s2: string two
*Return: on success 1
**/


char *str_concat(char *s1, char *s2)
{
char *str;
int i, j, k, p;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

str = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);
if (str == NULL)
return (NULL);
for (k = 0, p = 0; k < (i + j + 1); k++)
{
if (k < i)
str[k] = s1[k];
else
str[k] = s2[p++];
}
return (str);
}
