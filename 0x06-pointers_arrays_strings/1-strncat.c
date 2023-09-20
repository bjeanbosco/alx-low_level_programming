#include <string.h>
#include "main.h"
/**
* *_strncat - this concatnate string
*@dest: it is the one string from src going to be appended
*@src: it is string going to append dest
*@n: number of characters to be appended
*Return: returns dest
**/
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
