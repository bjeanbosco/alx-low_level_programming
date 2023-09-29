#include <string.h>
#include "main.h"
/**
* _memcpy - function
*@dest: destination
*@src: source
*@n: number
*Return: on success 1
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
