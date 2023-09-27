#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _print_rev_recursion - print reverse string
*@s: string to be reve
**/

void _print_rev_recursion(char *s)
{
char reverse;
int i, k, j;
k = strlen(s);
for(i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < k / 2; j++)
{
reverse = s[i];
s[i] = s[k - 1 - i];
s[k - 1 - i] = reverse;
}
_putchar(s[i]);
}
}
