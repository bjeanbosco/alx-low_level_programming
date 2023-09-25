#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* *_memset - function that fill free space
* @s: address to be occupiied
* @b: value to be filled in the space
* @n: number of bytes to be ocupied
* Return: on success 1
**/


char *_memset(char *s, char b, unsigned int n)
{
memset(s, b, n);
return (s);
}
