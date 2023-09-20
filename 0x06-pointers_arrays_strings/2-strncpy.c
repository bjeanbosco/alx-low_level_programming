#include <string.h>
#include "main.h"
/**
**_strncpy - this copy string from one pointer to another
* @dest: this is where sting copied
* @src: string to be copied
* @n: number of characters to be copied
* Return: return dest
**/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
