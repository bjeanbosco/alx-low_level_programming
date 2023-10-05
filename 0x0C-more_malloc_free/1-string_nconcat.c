#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - funtion
*@s1: string 1
*@s2: string 2
*@n: number of sapce
*Return: str
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int k, i, j;
char *str;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";
k = 0;
while (s1[k])
k++;

str = malloc(sizeof(*str) * k + n + 1);

if (str == NULL)
return (NULL);

for (i = 0, j = 0; i < (k + n); i++)
{
if (i < k)
{
str[i] = s1[i];
}
else
{
str[i] = s2[j++];
}
}
str[i] = '\0';
return (str);
}
