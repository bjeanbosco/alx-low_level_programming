#include "main.h"
/**
* *cap_string - this function is for capitalize every first letter
* @str: string to be capitalized
* Return: on success 1
**/
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
else if (str[i - 1] == ' ' || str[i - 1] == '.')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

}
else
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i];
}

}
}
return (str);
}
