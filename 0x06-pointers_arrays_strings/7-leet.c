#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *leet - encodeing words
* @str: words to be encoded
* Return: on success 1
**/

char *leet(char *str)
{
char word[] = "aeotlAEOLTL";
char code[] = "4307143071";
int i, j;
for (i = 0; str[i]; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == word[j])
{
str[i] = code[j];
}
}
}
return (str);
}
