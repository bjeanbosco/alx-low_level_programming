#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_strpbrk - scann and search match
* @s: string to be scanned
* @accept: charater to be verified from the string
* Return: on success 1
**/


char *_strpbrk(char *s, char *accept)
{
return (strpbrk(s, accept));
}
