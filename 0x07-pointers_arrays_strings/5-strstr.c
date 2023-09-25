#include <stdio.h>
#include <string.h>
#include "main.h"
/**
* *_strstr - search sub string
* @haystack: search from here
* @needle: substring to be searched
* Return: on success 1
**/

char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
