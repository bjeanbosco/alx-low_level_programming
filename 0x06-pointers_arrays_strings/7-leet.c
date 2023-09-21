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
int i = 0, j;
while (str[i] != '\0')
{
for (j = 0; j <= 9; j++)
{
if (str[i] == word[j])
{
str[i] = code[j];
}
}
i++;
}
return (str);
}
