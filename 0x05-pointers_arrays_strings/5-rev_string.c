#include "main.h"
#include <string.h>

/**
* rev_string - this function reverse string
* @s: is the string to reversed
**/

void rev_string(char *s)
{
int k = strlen(s), i, j;

for (i = 0; i < k / 2; i++)
{
j = s[i];
s[i] = s[k - i - 1];
s[k - i - 1] = j;
}
}
