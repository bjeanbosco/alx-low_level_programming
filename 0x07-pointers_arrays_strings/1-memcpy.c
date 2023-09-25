#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_memcpy - this copy string
* @dest: destination of what copied
* @src: what to be copied
* @n: bytes to be filled
* Return: on success 1
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
memcpy(dest, src, n);
return (dest);
}
