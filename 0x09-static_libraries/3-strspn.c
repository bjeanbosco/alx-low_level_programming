#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _strspn -function
*@s: string
*@accept: to be scanned
*Return: on success 1
**/
unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
