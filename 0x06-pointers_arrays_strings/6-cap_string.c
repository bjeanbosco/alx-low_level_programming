#include "main.h"
/**
* *cap_string - this function is for capitalize every first letter
* @str: string to be capitalized
* Return: on success 1
**/
char *cap_string(char *str)
{
int i, j;
int p[] = {9, 32, 10, 40, 125, 123, 41, 34, 59, 46, 33, 44, 63};
for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{

str[i] = str[i] - 32;
}
else
{
for (j = 0; j <= 12; j++)
{
if (p[j] == str[i - 1])
{
str[i] = str[i] - 32;
}
}
}
}
}
return (str);
}
