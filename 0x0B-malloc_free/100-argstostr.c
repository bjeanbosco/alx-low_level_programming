#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *argstostr - function
*@ac: size
*@av: string
*Return: on success 1
**/

char *argstostr(int ac, char **av)
{
char *word, *str;
int i, j, x;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0, x = 0; i < ac; i++)
{
for (j = 0; *(*(av + i) + j) != '\0'; j++, x++)
;
x++;
}
x++;

word = malloc(x * sizeof(char));
if (word == NULL)
return (NULL);

str = word;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
*word = av[i][j];
word++;
}
*word = '\n';
word++;
}

return (str);
}
