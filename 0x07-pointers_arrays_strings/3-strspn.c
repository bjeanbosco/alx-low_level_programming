#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strspn - this print length of match beween two strings
*@s: string to be scanned or checked
*@accept: list of charater contains in the string given
* Return: on success 1
**/

unsigned int _strspn(char *s, char *accept)
{
return (strspn(s, accept));
}
