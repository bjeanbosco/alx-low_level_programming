#include "main.h"
#include <string.h>
/**
*_memset - function
*@s: string
*@b: to be covered
*@n: number of bytes
*Return: on success 1
**/
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
