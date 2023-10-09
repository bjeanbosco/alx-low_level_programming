#include <stdio.h>
#include <string.h>
#define filename __FILE__
/**
* printFilename - function
* @name: parameter
* Return: on success 1
**/
char printFilename(char *name)
{
int i, len;
len = strlen(name);
for (i = 0; i < len; i++)
{
putchar(name[i]);
}
putchar('\n');
return (*name);
}

/**
* main - function
* Return: on success 1
**/
int main(void)
{
printFilename(filename);
return (0);
}
