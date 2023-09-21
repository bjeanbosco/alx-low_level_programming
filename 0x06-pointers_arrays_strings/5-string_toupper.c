#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *string_toupper - this function transform string to uppercase
*@str: this is string to be transformed
*Return: on success 1
**/
char *string_toupper(char *str)
{
int i,  len;
len = strlen(str);
for (i = 0; i < len; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{

str[i] = str[i] - 32;
}
}
return (str);
}
