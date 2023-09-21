#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* *rot13 - to encode
*@str: to be encoded
*Return: on success 1
**/


char *rot13(char *str)
{
int j;
int i = 0;
char letter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char reversed[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int len = strlen(letter);
while (str[i] != '\0')
{
{
for (j = 0; j < len - 1; j++)
{
if (str[i] == letter[j])
{
str[i] = reversed[j];
}
}
i++;
}
}
return (str);

}
